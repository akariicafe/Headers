@protocol UIFeedbackGeneratorUserInteractionDriven;

@interface _TVRButtonHaptic : NSObject

@property (retain, nonatomic) id<UIFeedbackGeneratorUserInteractionDriven> behavior;

+ (id)hapticForView:(id)a0;

- (void)userInteractionCancelled;
- (void)userInteractionEnded;
- (void).cxx_destruct;
- (void)userInteractionBegan;

@end
