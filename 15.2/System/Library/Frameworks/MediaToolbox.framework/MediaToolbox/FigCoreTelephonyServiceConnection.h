@class NSString, CTDataStatus, CoreTelephonyClient, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface FigCoreTelephonyServiceConnection : NSObject <CoreTelephonyClientDataDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_doomTimer;
    struct __CTServerConnection { } *_ctServerConnection;
    CoreTelephonyClient *_ctClient;
    CTDataStatus *_ctDataStatus;
    struct OpaqueFigCoreTelephonyStatus { unsigned char hasHighSpeedHighPower; } _currentStatus;
    struct FigCoreTelephonyMonitorListHead { struct FigCoreTelephonyMonitorCallbackEntry *stqh_first; struct FigCoreTelephonyMonitorCallbackEntry **stqh_last; } _callbackEntries;
    struct __CFAllocator { } *_allocator;
}

@property (readonly, nonatomic) struct OpaqueFigCoreTelephonyStatus { unsigned char x0; } currentStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)_setupConnection;
- (void)processDataStatus:(id)a0;
- (void)_teardownConnection;
- (void)deregisterListener:(void *)a0;
- (void)internetDataStatus:(id)a0;
- (id)init;
- (void)_handleCTNotification:(struct __CFString { } *)a0 notificationInfo:(struct __CFDictionary { } *)a1;
- (void)dealloc;
- (int)registerListener:(void *)a0 callback:(void /* function */ *)a1 queue:(id)a2;

@end
