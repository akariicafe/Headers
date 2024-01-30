@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface FPDRTCReportingSessionManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_group;
}

+ (id)defaultManager;

- (void)flushMessagesWithCompletion:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)postReportWithCategory:(unsigned long long)a0 type:(unsigned long long)a1 payload:(id)a2 error:(id)a3 decoratedPayload:(id)a4 session:(id)a5 observer:(id)a6;
- (id)sessionForDomainID:(id)a0 providerVersion:(id)a1;
- (id)sessionForProvider:(id)a0 version:(id)a1;
- (id)sessionForProviderID:(id)a0 version:(id)a1;

@end
