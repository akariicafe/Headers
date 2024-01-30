@class SBLayoutElement, SBWorkspaceEntity;

@interface _SBWindowReplacementResult : NSObject

@property (retain, nonatomic) SBLayoutElement *primaryElement;
@property (retain, nonatomic) SBLayoutElement *sideElement;
@property (retain, nonatomic) SBWorkspaceEntity *activatingEntity;
@property (nonatomic) long long requestedUnlockedEnvironmentMode;

- (void).cxx_destruct;

@end
