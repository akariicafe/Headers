@protocol UIFeedbackGeneratorUserInteractionDriven;

@interface _TVRSiriHaptic : NSObject

@property (retain, nonatomic) id<UIFeedbackGeneratorUserInteractionDriven> behavior;
@property (nonatomic) long long state;
@property (nonatomic) BOOL shouldExecuteStartCompletionBlock;

- (void).cxx_destruct;
- (id)initWithButton:(id)a0;
- (void)performSiriStartWithCompletion:(id /* block */)a0;
- (void)siriButtonTouchesEnded;
- (void)performSiriEndWithSuccess:(BOOL)a0;

@end
