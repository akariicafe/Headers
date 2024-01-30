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

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;

@end
