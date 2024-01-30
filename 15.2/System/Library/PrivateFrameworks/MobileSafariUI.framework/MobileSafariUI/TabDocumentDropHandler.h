@class UIViewController;

@interface TabDocumentDropHandler : NSObject

@property (readonly, nonatomic) unsigned long long maximumNumberOfTabs;
@property (weak, nonatomic) UIViewController *alertPresentationViewController;

+ (BOOL)canHandleSession:(id)a0;
+ (id)tabDocumentsForDragItems:(id)a0;
+ (unsigned long long)proposedOperationForSession:(id)a0 intoWindowWithPrivateBrowsingEnabled:(BOOL)a1;

- (void)dropItemsForSession:(id)a0 withOperation:(unsigned long long)a1 restorationHandler:(id /* block */)a2 insertionHandler:(id /* block */)a3;
- (void)promptIfNeededToConfirmNumberOfNavigationIntents:(unsigned long long)a0 withCompletionHandler:(id /* block */)a1;
- (id)initWithAlertPresentationViewController:(id)a0;
- (unsigned long long)_minimumNumberOfNewTabsRequiringConfirmation;
- (void).cxx_destruct;
- (void)dropItemsForSession:(id)a0 withOperation:(unsigned long long)a1 restorationHandler:(id /* block */)a2 insertionHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (id)init;
- (id)initWithMaximumNumberOfTabs:(unsigned long long)a0 alertPresentationViewController:(id)a1;

@end
