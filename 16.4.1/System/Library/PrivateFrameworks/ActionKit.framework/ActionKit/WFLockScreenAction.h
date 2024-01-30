@class NSError, WFContentCollection;

@interface WFLockScreenAction : WFAction

- (id)init;
- (void)runWithInput:(WFContentCollection *)a0 completionHandler:(void (^)(NSError *))a1;
- (id)initWithIdentifier:(id)a0 definition:(id)a1 serializedParameters:(id)a2;

@end
