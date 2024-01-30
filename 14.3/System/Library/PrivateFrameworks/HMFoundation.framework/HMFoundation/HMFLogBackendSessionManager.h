@class NSString, NSPointerArray, NSMutableArray;
@protocol HMFRTCSessionFactory;

@interface HMFLogBackendSessionManager : NSObject <_HMFLogBackendSessionDelegate, HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSPointerArray *_activeSessions;
    NSMutableArray *_queuedSessions;
    id<HMFRTCSessionFactory> _rtcFactory;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)sharedSessionManager;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFactory:(id)a0;
- (void)didCompleteActiveSession;
- (void)__sendMetaEventWithName:(id)a0 correspondingServiceName:(id)a1;
- (id)logBackendSessionWithServiceName:(id)a0;

@end
