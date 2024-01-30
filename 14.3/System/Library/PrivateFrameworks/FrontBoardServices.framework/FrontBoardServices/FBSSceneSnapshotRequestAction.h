@class FBSSceneSnapshotContext;

@interface FBSSceneSnapshotRequestAction : BSAction

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) FBSSceneSnapshotContext *context;

- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)initWithType:(unsigned long long)a0 context:(id)a1 completion:(id /* block */)a2;

@end
