@class NSString, UIWindowScene;

@interface _UIWindowSceneStackRecord : NSObject <BSDebugDescriptionProviding> {
    UIWindowScene *_windowScene;
    unsigned long long _evaluationStrategy;
    unsigned long long _lastPushedTime;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;

@end
