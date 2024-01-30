@class FBSSceneSettingsDiff, NSString, FBSSceneTransitionContext, FBSSceneSettings;
@protocol NSObject, NSCopying;

@interface FBSceneUpdateContext : NSObject <BSDescriptionProviding>

@property (copy, nonatomic) NSString *sceneID;
@property (nonatomic) unsigned long long transactionID;
@property (retain, nonatomic) FBSSceneSettings *settings;
@property (retain, nonatomic) FBSSceneSettingsDiff *settingsDiff;
@property (weak, nonatomic) FBSSceneTransitionContext *transitionContext;
@property (copy, nonatomic) id<NSObject, NSCopying> clientContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contextWithScene:(id)a0;

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;

@end
