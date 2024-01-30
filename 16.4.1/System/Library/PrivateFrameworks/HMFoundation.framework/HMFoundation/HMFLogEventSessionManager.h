@class NSDictionary;
@protocol HMFLogEventSessionFactory;

@interface HMFLogEventSessionManager : HMFObject {
    id<HMFLogEventSessionFactory> _sessionFactory;
    NSDictionary *_commonFields;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)addCommonField:(id)a0 withValue:(id)a1;
- (void)removeCommonField:(id)a0;
- (id)sessionWithUUID:(id)a0 serviceName:(id)a1 uploadImmediately:(BOOL)a2;
- (void)setSessionFactory:(id)a0;
- (void)submitEventWithName:(id)a0 serviceName:(id)a1 payload:(id)a2;
- (void)submitEventWithName:(id)a0 serviceName:(id)a1 uploadImmediately:(BOOL)a2 payload:(id)a3;

@end
