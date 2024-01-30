@class SBLayoutElement, SBWorkspaceEntity;

@interface SBSwitcherWindowReplacementResult : NSObject

@property (readonly, nonatomic) SBLayoutElement *primaryElement;
@property (readonly, nonatomic) SBLayoutElement *sideElement;
@property (readonly, nonatomic) SBWorkspaceEntity *activatingEntity;
@property (readonly, nonatomic) long long requestedUnlockedEnvironmentMode;

+ (id)defaultWindowReplacementResult;
+ (id)windowReplacementResultByRemovingLayoutElements:(id)a0 fromLayoutState:(id)a1 withPrecedingLayoutState:(id)a2 recentAppLayouts:(id)a3;

- (void).cxx_destruct;
- (id)initWithPrimaryElement:(id)a0 sideElement:(id)a1 activatingEntity:(id)a2 requestedUnlockedEnvironmentMode:(long long)a3;

@end
