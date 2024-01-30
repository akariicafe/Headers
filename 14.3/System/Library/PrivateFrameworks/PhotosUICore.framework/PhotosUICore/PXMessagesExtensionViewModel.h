@class NSString, NSArray, NSURL, NSDate, UIViewController;
@protocol PXCMMSuggestion;

@interface PXMessagesExtensionViewModel : PXObservable <PXMutableMessagesExtensionViewModel>

@property (class, readonly, nonatomic) PXMessagesExtensionViewModel *sharedRootViewModel;

@property (readonly, nonatomic) id<PXCMMSuggestion> selectedSuggestion;
@property (readonly, nonatomic) NSURL *selectedURL;
@property (readonly, nonatomic) unsigned long long selectedActivityType;
@property (readonly, copy, nonatomic) NSString *selectedMessageText;
@property (readonly, nonatomic) NSDate *selectedMessageDate;
@property (readonly, nonatomic) UIViewController *presentedViewController;
@property (readonly, copy, nonatomic) NSArray *recipients;
@property (readonly, nonatomic, getter=isDrawerActive) BOOL drawerActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearSelection;
- (void).cxx_destruct;
- (void)setRecipients:(id)a0;
- (void)performChanges:(id /* block */)a0;
- (id)mutableChangeObject;
- (void)setSelectedSuggestion:(id)a0;
- (void)setSelectedURL:(id)a0;
- (void)setSelectedActivityType:(unsigned long long)a0;
- (void)setSelectedMessageText:(id)a0;
- (void)setSelectedMessageDate:(id)a0;
- (void)setDrawerActive:(BOOL)a0;
- (void)setPresentedViewController:(id)a0;

@end
