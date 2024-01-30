@class CNContactStore, UIViewController, NSString;
@protocol SXViewControllerPresenting;

@interface SXContactsPresenter : NSObject <CNContactViewControllerDelegate, SXContactsPresenter>

@property (readonly, nonatomic) id<SXViewControllerPresenting> viewControllerPresenting;
@property (readonly, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) UIViewController *presentedViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)contactViewController:(id)a0 didCompleteWithContact:(id)a1;
- (void).cxx_destruct;
- (void)dismissPresentedViewController;
- (void)presentContact:(id)a0;
- (id)initWithViewControllerPresenting:(id)a0 contactStore:(id)a1;

@end
