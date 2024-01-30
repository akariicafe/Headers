@class ICTextView;

@interface ICSharedScrollClampingController : NSObject

@property (nonatomic) double scrollClampingTopOffsetLineFragmentHeight;
@property long long userInitiatedSaveCount;
@property long long scrollClampingTopTextIndex;
@property double scrollClampingTopOffsetFactor;
@property (readonly) long long scrollClampingStack;
@property (readonly, weak, nonatomic) ICTextView *textView;
@property (readonly, nonatomic) double scrollClampingTurnOffDelay;

- (BOOL)isClamped;
- (void)dealloc;
- (void).cxx_destruct;
- (void)unclamp;
- (void)clamp;
- (id)clampedYValue;
- (void)contextDidSaveUserInitiatedChange:(id)a0;
- (void)contextWillSaveUserInitiatedChange:(id)a0;
- (id)initWithTextView:(id)a0 listensToMergeNotifications:(BOOL)a1;
- (id)initWithTextView:(id)a0 listensToMergeNotifications:(BOOL)a1 clampingTurnOffDelay:(double)a2;
- (void)mergeRelatedOperationsDidEnd:(id)a0;
- (void)mergeRelatedOperationsWillBegin:(id)a0;
- (BOOL)notificationObjectMatchesTextViewNote:(id)a0;
- (void)setScrollClampingStack:(long long)a0;
- (void)textStorageWillEndEditingNotification:(id)a0;
- (void)topTextIndex:(unsigned long long *)a0 topTextOffset:(double *)a1 topTextFragmentHeight:(double *)a2;
- (void)unclampWithMergeUpdates:(BOOL)a0;

@end
