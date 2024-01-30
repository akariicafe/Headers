@class GDEntityResolutionRequest, GDEntityResolutionCollectionResult, NSError, GDEntityResolutionResult;

@interface _TtCC24IntelligencePlatformCore19EntityResolutionXPC6Server : NSObject <GDEntityResolutionXPCProtocol>

- (id)init;
- (void).cxx_destruct;
- (void)submitCollectionQuery:(GDEntityResolutionRequest *)a0 withCompletion:(void (^)(GDEntityResolutionCollectionResult *, NSError *))a1;
- (void)submitQuery:(GDEntityResolutionRequest *)a0 withCompletion:(void (^)(GDEntityResolutionResult *, NSError *))a1;

@end
