@class FBSSceneSettingsDiff, NSString, FBSSceneTransitionContext, FBSSceneSettings;
@protocol NSObject, NSCopying;

@interface FBSceneUpdateContext : NSObject <BSDescriptionProviding> {
    BOOL _lifecycleExternallyManaged;
}

@property (readonly, copy, nonatomic) NSString *sceneID;
@property (readonly, nonatomic) unsigned long long transactionID;
@property (readonly, nonatomic) FBSSceneSettings *settings;
@property (readonly, nonatomic) FBSSceneSettingsDiff *settingsDiff;
@property (readonly, weak, nonatomic) FBSSceneTransitionContext *transitionContext;
@property (copy, nonatomic) id<NSObject, NSCopying> clientContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contextWithSceneID:(id)a0 transactionID:(unsigned long long)a1 settings:(id)a2 settingsDiff:(id)a3 transitionContext:(id)a4;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isClientLifecycleExternallyManaged;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;

@end
