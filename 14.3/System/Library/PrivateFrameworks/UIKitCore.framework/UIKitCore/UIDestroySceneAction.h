@class NSSet;

@interface UIDestroySceneAction : BSAction

@property (readonly, nonatomic) unsigned long long preferredAnimationType;
@property (readonly, nonatomic) NSSet *persistedIdentifiers;
@property (readonly, nonatomic) BOOL destroySceneSession;

- (id)initWithPersistedIdentifiers:(id)a0 preferredAnimationType:(unsigned long long)a1 forDestroyingSession:(BOOL)a2 callbackQueue:(id)a3 completion:(id /* block */)a4;
- (id)initWithPersistedIdentifiers:(id)a0 preferredAnimationType:(unsigned long long)a1 callbackQueue:(id)a2 completion:(id /* block */)a3;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (long long)UIActionType;
- (id)initWithPreferredAnimationType:(unsigned long long)a0 callbackQueue:(id)a1 completion:(id /* block */)a2;

@end
