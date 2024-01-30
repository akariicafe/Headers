@class AEXPCProxy, NSObject;
@protocol OS_dispatch_queue;

@interface AEAssessmentStatePublishingProxy : NSObject <AEAssessmentStatePublishing> {
    AEXPCProxy *_xpcProxy;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)proxyWithEndpoint:(id)a0 queue:(id)a1;

- (void).cxx_destruct;
- (void)endPublications:(id /* block */)a0;
- (void)publishAssessmentState:(id)a0 withCompletion:(id /* block */)a1;

@end
