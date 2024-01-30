@class NSTimer, ICNote, NSString;

@interface ICNoteMergeabilityController : NSObject <ICNoteMergeabilityDelegate>

@property long long blockingMergeStack;
@property (nonatomic) BOOL hasBlockedMergeRequest;
@property (nonatomic) BOOL attemptedToMergeWhenEditingMarkedText;
@property (retain, nonatomic) NSTimer *unmarkTextTimer;
@property (nonatomic) BOOL shouldUseLongDelayWhenSchedulingUnmarkTextTimer;
@property (readonly, nonatomic) ICNote *note;
@property (nonatomic) BOOL shouldBypassDidUnmarkTextCallback;
@property (readonly, nonatomic) BOOL mergeIsBlocked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct _NSRange { unsigned long long x0; unsigned long long x1; })markedTextRange;
- (void)dealloc;
- (id)textStorage;
- (void).cxx_destruct;
- (id)initWithNote:(id)a0;
- (void)requestMerge;
- (void)performBlockToMergeNoteData:(id /* block */)a0;
- (void)requestMergeNotePrimitiveData;
- (void)addNotificationCenterObservers;
- (void)performMerge;
- (void)performPreviouslyBlockedMergeIfNecessary;
- (void)removeNotificationCenterObservers;
- (void)resetBlockingMergeStack;
- (void)resetUnmarkTextTimerIfNeeded;
- (void)startBlockingMerge;
- (void)startUnmarkTextTimerIfNeeded;
- (void)stopBlockingMerge;
- (void)stopUnmarkTextTimerIfNeeded;
- (void)textStorageDidEndEditingNotification:(id)a0;
- (void)textViewDidEndSelectionChange:(id)a0;
- (void)textViewDidMarkText:(id)a0;
- (void)textViewDidUnmarkText:(id)a0;
- (void)textViewWillStartSelectionChange:(id)a0;
- (void)unmarkTextIfNecessary;
- (double)unmarkTextTimerTimeout;
- (void)userExpandedOrClosedKeyboardCandidateCollectionView:(id)a0;

@end
