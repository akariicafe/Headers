@class UIActivityViewController, NSArray, SHSheetActivityPerformerResult, NSOperationQueue, UIActivity, SHSheetSession;
@protocol SHSheetActivityPerformerDelegate, SHSheetActivityPerformerPresentationInterface;

@interface SHSheetActivityPerformer : NSObject

@property (retain, nonatomic) UIActivityViewController *activityViewController;
@property (nonatomic) long long state;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) SHSheetActivityPerformerResult *result;
@property (retain, nonatomic) NSArray *activityItemProviderOperations;
@property (retain, nonatomic) NSOperationQueue *activityItemProviderOperationQueue;
@property (nonatomic) unsigned long long backgroundTaskIdentifier;
@property (nonatomic) unsigned long long beginPerformingActivityTimestamp;
@property (readonly, nonatomic) UIActivity *activity;
@property (readonly, weak, nonatomic) SHSheetSession *session;
@property (weak, nonatomic) id<SHSheetActivityPerformerDelegate> delegate;
@property (weak, nonatomic) id<SHSheetActivityPerformerPresentationInterface> presentationController;
@property (readonly, nonatomic) BOOL isRunning;

- (void)_start;
- (void)performWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)finishWithSuccess:(BOOL)a0;
- (id)initWithActivity:(id)a0 session:(id)a1;
- (void)dealloc;
- (void)cancel;
- (void)_completePerformingActivityWithState:(long long)a0 returnedItems:(id)a1 error:(id)a2;
- (BOOL)_enqueueBackgroundOperationsIfNeeded;
- (void)_finishWithState:(long long)a0;
- (id)_resolvedActivityItems;
- (void)_prepareActivityPresentation;
- (void)_prepareActivityWithCompletion:(id /* block */)a0;
- (void)_configureActivityBeforePreparation;
- (void)_configureActivityAfterPreparation;
- (BOOL)_presentPopoverContentViewController;
- (void)_performPresentationWithViewController:(id)a0;
- (void)_executeActivity;
- (void)_handlePresentationCompletion;
- (BOOL)_shouldExecuteItemOperation:(id)a0;
- (void)_didFinishAllBackgroundOperations;

@end
