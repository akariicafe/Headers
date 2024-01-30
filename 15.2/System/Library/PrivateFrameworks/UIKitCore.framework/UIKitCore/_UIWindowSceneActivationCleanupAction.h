@class NSString;

@interface _UIWindowSceneActivationCleanupAction : BSAction

@property (readonly, nonatomic) NSString *interactionIdentifier;

+ (id)actionWithInteractionIdentifier:(id)a0 responseHandler:(id /* block */)a1;

- (long long)UIActionType;

@end
