@class UIActivityViewController, NSArray, SHSheetActivityPerformerResult, NSOperationQueue, UIActivity, SHSheetSession;
@protocol SHSheetActivityPerformerDelegate, SHSheetActivityPerformerPresentationInterface;

@interface SHSheetActivityPerformer : NSObject

@property (weak, nonatomic) UIActivityViewController *activityViewController;
@property (nonatomic) long long state;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) SHSheetActivityPerformerResult *result;
@property (retain, nonatomic) NSArray *activityItemProviderOperations;
@property (retain, nonatomic) NSOperationQueue *activityItemProviderOperationQueue;
@property (nonatomic) unsigned long long backgroundTaskIdentifier;
@property (nonatomic) unsigned long long beginPerformingActivityTimestamp;
@property (retain, nonatomic) UIActivityViewController *retainedActivityViewController;
@property (readonly, nonatomic) UIActivity *activity;
@property (readonly, weak, nonatomic) SHSheetSession *session;
@property (weak, nonatomic) id<SHSheetActivityPerformerDelegate> delegate;
@property (weak, nonatomic) id<SHSheetActivityPerformerPresentationInterface> presentationController;
@property (readonly, nonatomic) BOOL isRunning;

- (void)_start;
- (void)cancel;
- (void)dealloc;
- (void).cxx_destruct;
- (void)performWithCompletionHandler:(id /* block */)a0;
- (void)_prepareActivityWithCompletion:(id /* block */)a0;
- (void)_completePerformingActivityWithState:(long long)a0 returnedItems:(id)a1 error:(id)a2;
- (void)_configureActivityAfterPreparation;
- (void)_configureActivityBeforePreparation;
- (void)_didFinishAllBackgroundOperations;
- (BOOL)_enqueueBackgroundOperationsIfNeeded;
- (void)_executeActivity;
- (void)_finishWithState:(long long)a0;
- (void)_handlePresentationCompletion;
- (void)_performPresentationWithViewController:(id)a0;
- (void)_prepareActivityPresentation;
- (BOOL)_presentPopoverContentViewController;
- (id)_resolvedActivityItems;
- (BOOL)_shouldExecuteItemOperation:(id)a0;
- (void)finishWithSuccess:(BOOL)a0;
- (id)initWithActivity:(id)a0 session:(id)a1;

@end
