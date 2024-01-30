@class NSString, SBHomeGestureParticipant;

@interface SBHomeGestureArbiterRecipe : NSObject <SBTestRecipe>

@property (retain, nonatomic) SBHomeGestureParticipant *participant;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)load;

@end
