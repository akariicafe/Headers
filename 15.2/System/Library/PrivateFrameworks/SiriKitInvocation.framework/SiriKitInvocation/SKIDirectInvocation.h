@interface SKIDirectInvocation : NSObject

+ (id)runSiriKitExecutorCommandWithContext:(id)a0 payload:(id)a1;
+ (id)wrapCommandInStartLocalRequest:(id)a0;
+ (id)makeParseWithDirectInvocationPayload:(id)a0;
+ (id)runSiriKitExecutorCommandWithContext:(id)a0 parse:(id)a1 appBundleId:(id)a2;

@end
