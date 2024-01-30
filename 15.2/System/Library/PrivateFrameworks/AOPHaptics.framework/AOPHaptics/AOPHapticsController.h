@class NSObject;
@protocol OS_dispatch_queue;

@interface AOPHapticsController : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    struct IONotificationPort { } *_notificationPort;
    unsigned int _arrivalNotification;
    id /* block */ _cancelHandler;
    id /* block */ _readyHandler;
    struct atomic_flag { _Atomic BOOL _Value; } _activated;
    struct atomic_flag { _Atomic BOOL _Value; } _cancelled;
}

@property (nonatomic) unsigned int service;
@property (nonatomic) unsigned int connect;

+ (int)AHtoHMOutputType:(unsigned char)a0;

- (void)activate;
- (id)init;
- (void)dealloc;
- (void)setDispatchQueue:(id)a0;
- (void)cancel;
- (void)setCancelHandler:(id /* block */)a0;
- (void)_findService;
- (void)setReadyHandler:(id /* block */)a0;
- (BOOL)setMappings:(id)a0 error:(id *)a1;
- (BOOL)playSlotIndices:(id)a0 error:(id *)a1;
- (void)signalReady;

@end
