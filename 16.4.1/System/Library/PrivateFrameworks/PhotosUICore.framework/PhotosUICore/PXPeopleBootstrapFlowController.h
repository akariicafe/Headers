@class UIBarButtonItem, NSArray, PXPeopleBootstrapContext, NSString, UIViewController;
@protocol PXPeopleSuggestionManagerDataSource, PXPeopleFlowViewController, PXPeopleBootstrapFlowDelegate;

@interface PXPeopleBootstrapFlowController : NSObject <PXPeopleFlowController>

@property (copy, nonatomic) NSArray *viewControllers;
@property (nonatomic) unsigned long long viewControllerIndex;
@property (retain, nonatomic) id<PXPeopleBootstrapFlowDelegate> bootstrapDelegate;
@property (retain, nonatomic) id<PXPeopleSuggestionManagerDataSource> bootstrapDataSource;
@property (readonly, nonatomic) PXPeopleBootstrapContext *context;
@property (readonly, nonatomic) BOOL shouldPresentNaming;
@property (readonly, nonatomic) BOOL shouldPresentPostNaming;
@property (nonatomic) unsigned long long namingResultType;
@property (readonly, nonatomic) BOOL hasNextViewController;
@property (readonly, nonatomic) UIViewController<PXPeopleFlowViewController> *nextViewController;
@property (readonly, nonatomic) BOOL hasPreviousViewController;
@property (readonly, nonatomic) UIViewController<PXPeopleFlowViewController> *previousViewController;
@property (readonly, nonatomic) BOOL wantsCancelButton;
@property (readonly, nonatomic) UIBarButtonItem *leftBarButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)done:(id)a0;
- (void)cancel:(id)a0;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithContext:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)commonInitWithContext:(id)a0;
- (void)computeViewControllersForBootstrapFlow;
- (id)initEmptyFlowWithContext:(id)a0;
- (void)recomputeViewControllersForChangeInKeyPath:(id)a0;
- (BOOL)shouldPresentConfirmationForPerson:(id)a0;

@end
