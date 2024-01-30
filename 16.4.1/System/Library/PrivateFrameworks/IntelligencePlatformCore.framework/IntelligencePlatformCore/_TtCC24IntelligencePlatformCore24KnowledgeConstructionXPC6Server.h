@class NSError;

@interface _TtCC24IntelligencePlatformCore24KnowledgeConstructionXPC6Server : NSObject <GDKnowledgeConstructionXPCProtocol>

- (void)checkInWithCompletion:(void (^)(BOOL, NSError *))a0;
- (id)init;
- (void)runFullPipelineWithReason:(unsigned long long)a0 completion:(void (^)(BOOL, NSError *))a1;
- (void)stopPipelineWithCompletion:(void (^)(BOOL, NSError *))a0;

@end
