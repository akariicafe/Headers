@class NSString, NSPointerArray, NSMutableArray;
@protocol CARPFRTCSessionFactory;

@interface CARPFLogBackendSessionManager : NSObject <_CARPFLogBackendSessionDelegate, CARPFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSPointerArray *_activeSessions;
    NSMutableArray *_queuedSessions;
    id<CARPFRTCSessionFactory> _rtcFactory;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedSessionManager;
+ (id)logCategory;

- (void).cxx_destruct;
- (id)init;
- (id)initWithFactory:(id)a0;
- (void)didCompleteActiveSession;
- (void)__sendMetaEventWithName:(id)a0 correspondingServiceName:(id)a1;
- (id)logBackendSessionWithServiceName:(id)a0;

@end
