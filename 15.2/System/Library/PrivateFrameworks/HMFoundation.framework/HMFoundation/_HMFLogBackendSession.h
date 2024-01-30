@class NSUUID, NSString, NSMutableArray, RTCReporting;
@protocol _HMFLogBackendSessionDelegate;

@interface _HMFLogBackendSession : NSObject <HMFLogBackendSession, HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_queuedEvents;
    RTCReporting *_session;
}

@property (readonly, nonatomic) NSUUID *samplingUUID;
@property (weak, nonatomic) id<_HMFLogBackendSessionDelegate> delegate;
@property (readonly, nonatomic) NSString *serviceName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (BOOL)sendMessage:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_flushQueuedEvents;
- (id)initWithSession:(id)a0 serviceName:(id)a1 samplingUUID:(id)a2 delegate:(id)a3;
- (void)activateWithSession:(id)a0;

@end
