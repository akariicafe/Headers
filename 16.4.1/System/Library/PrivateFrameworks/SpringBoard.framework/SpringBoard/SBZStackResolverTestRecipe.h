@class NSString, SBWindowScene, SBFZStackParticipant;

@interface SBZStackResolverTestRecipe : NSObject <SBFZStackParticipantDelegate, SBTestRecipe>

@property (retain, nonatomic) SBFZStackParticipant *participant;
@property (nonatomic) BOOL wantsHomeGesture;
@property (weak, nonatomic) SBWindowScene *windowScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (void)zStackParticipant:(id)a0 updatePreferences:(id)a1;
- (void)zStackParticipantDidChange:(id)a0;
- (id)title;
- (void).cxx_destruct;
- (void)windowSceneDidUpdate:(id)a0;

@end
