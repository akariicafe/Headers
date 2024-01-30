@class NSDictionary;
@protocol HMFLogBackendSession;

@interface HMFLogEventSession : HMFNullLogEventSession

@property (readonly, nonatomic) NSDictionary *commonFields;
@property (readonly, nonatomic) id<HMFLogBackendSession> backend;

- (void).cxx_destruct;
- (void)submitEventWithName:(id)a0 payload:(id)a1;
- (id)initWithUUID:(id)a0 serviceName:(id)a1 commonFields:(id)a2 backend:(id)a3;

@end
