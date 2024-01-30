@class NSString, SBFZStackParticipant;

@interface SBZStackResolverTestRecipe : NSObject <SBFZStackParticipantDelegate, SBTestRecipe>

@property (retain, nonatomic) SBFZStackParticipant *participant;
@property (nonatomic) BOOL wantsHomeGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)load;

- (void)zStackParticipantDidChange:(id)a0;
- (void)zStackParticipant:(id)a0 updatePreferences:(id)a1;
- (id)title;
- (void).cxx_destruct;
- (void)handleVolumeIncrease;
- (void)handleVolumeDecrease;

@end
