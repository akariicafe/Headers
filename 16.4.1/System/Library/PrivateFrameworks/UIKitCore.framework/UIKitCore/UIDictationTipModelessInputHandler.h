@protocol UIDictationTipHandlerDelegate;

@interface UIDictationTipModelessInputHandler : NSObject

@property (weak, nonatomic) id<UIDictationTipHandlerDelegate> delegate;
@property (nonatomic) BOOL modelessInputTipDictationStoppedSignal;
@property (nonatomic) BOOL softwareKeyboardInteractionAfterDictationStoppedSignal;
@property (nonatomic) BOOL shouldAttemptToShowModelessTip;

- (BOOL)shouldShowModelessInputTip;
- (void)triggerAttemptToShowModelessTipFlag;
- (void)showModelessInputTip;
- (void)processUserInteractionEnded;
- (id)initWithDelegate:(id)a0;
- (void)userInteractionEndedDuringModelessInputTipDictationStoppedSignal;
- (void)processSoftwareKeyboardInteraction;
- (void).cxx_destruct;
- (void)resetDictationTipModelessHandlerSignalFlags;

@end
