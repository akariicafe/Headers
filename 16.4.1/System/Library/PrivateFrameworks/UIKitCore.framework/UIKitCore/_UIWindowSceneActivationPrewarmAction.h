@class NSString;

@interface _UIWindowSceneActivationPrewarmAction : BSAction

@property (readonly, nonatomic) unsigned int sourceLayerContextId;
@property (readonly, nonatomic) unsigned long long morphContainerRenderId;
@property (readonly, nonatomic) unsigned long long deparentingPortalAlphaSourceLayerRenderId;
@property (readonly, nonatomic) NSString *sourceAppBundleIdentifier;
@property (readonly, nonatomic) NSString *sourceSceneIdentifier;
@property (readonly, nonatomic) NSString *interactionIdentifier;
@property (readonly, nonatomic) BOOL requestCenterSlot;
@property (readonly, nonatomic) BOOL requestFullscreen;

+ (id)actionWithMorphContainer:(id)a0 alphaSource:(id)a1 sourceIdentifier:(id)a2 interactionIdentifier:(id)a3 requestCenterSlot:(BOOL)a4 requestFullscreen:(BOOL)a5 responseHandler:(id /* block */)a6;

- (long long)UIActionType;

@end
