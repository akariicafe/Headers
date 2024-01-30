@class NSString, CTDataStatus, CoreTelephonyClient, NSObject;
@protocol OS_dispatch_queue;

@interface _NSCFNetworkMonitor : NSObject <CoreTelephonyClientDataDelegate> {
    CoreTelephonyClient *_client;
    NSObject<OS_dispatch_queue> *_queue;
    CTDataStatus *_status;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _statusLock;
    BOOL _queryFailed;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)internetDataStatus:(id)a0;
- (void)dealloc;

@end
