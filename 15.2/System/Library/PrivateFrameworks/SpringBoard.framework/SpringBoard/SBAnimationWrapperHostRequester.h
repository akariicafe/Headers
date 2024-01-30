@class NSString;

@interface SBAnimationWrapperHostRequester : NSObject <SBSceneViewPresentationConfiguring>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedRequester;

- (id)sceneViewPresentationIdentifier:(id)a0;
- (long long)sceneViewPresentationPriority:(id)a0;

@end
