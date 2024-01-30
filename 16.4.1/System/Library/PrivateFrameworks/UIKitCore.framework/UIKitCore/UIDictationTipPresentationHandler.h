@interface UIDictationTipPresentationHandler : NSObject

@property (nonatomic) long long dictationTipSignaled;
@property (nonatomic) BOOL tipPresentedInCurrentDictationSession;
@property (nonatomic) BOOL isShowingTip;

- (BOOL)dictationCommandTipsEnabled;
- (BOOL)dictationSelectionTipShown;
- (void)resetDictationTipSignal;
- (BOOL)dictationTipShownOverLimit:(long long)a0;
- (BOOL)dictationInsertionTipShown;
- (BOOL)dictationModelessInputTipShown;
- (BOOL)dictationDeletionTipShown;
- (void)resetHandler;
- (BOOL)dictationEmojiTipShown;
- (BOOL)shouldSignalDictationTip:(long long)a0;
- (BOOL)dictationReplacementTipShown;
- (long long)dictationTipDisplayCount:(long long)a0;
- (void)signalTipPresentedInCurrentDictationSession;
- (long long)getDictationTipSignaled;
- (id)init;
- (BOOL)tipShownLastDay;
- (BOOL)dictationStopTipShown;

@end
