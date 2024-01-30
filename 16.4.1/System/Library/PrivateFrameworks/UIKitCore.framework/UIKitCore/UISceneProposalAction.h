@class NSString, BSAction;

@interface UISceneProposalAction : BSAction

@property (readonly, copy, nonatomic) NSString *persistentIdentifier;
@property (readonly, copy, nonatomic) NSString *sceneIdentifier;
@property (readonly, copy, nonatomic) BSAction *action;

- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (long long)UIActionType;
- (id)initWithPersistentIdentifier:(id)a0 action:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (id)initWithSceneIdentifier:(id)a0 action:(id)a1 queue:(id)a2 completion:(id /* block */)a3;

@end
