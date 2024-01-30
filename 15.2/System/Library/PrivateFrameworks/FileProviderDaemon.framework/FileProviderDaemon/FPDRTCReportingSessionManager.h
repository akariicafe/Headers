@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface FPDRTCReportingSessionManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_group;
}

+ (id)defaultManager;

- (void)flushMessagesWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (id)sessionForProviderID:(id)a0;
- (id)sessionForDomainID:(id)a0;
- (id)sessionForProvider:(id)a0;
- (void)postReportWithCategory:(unsigned long long)a0 type:(unsigned long long)a1 payload:(id)a2 completion:(id /* block */)a3;

@end
