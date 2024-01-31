@class NSArray, CNContactNavigationController, NSString;
@protocol CNVCardViewControllerDelegate;

@interface CNVCardViewController : UIViewController <CNContactNavigationControllerDelegate>

@property (retain, nonatomic) NSArray *contacts;
@property (weak, nonatomic) id<CNVCardViewControllerDelegate> delegate;
@property (readonly, nonatomic) CNContactNavigationController *contactNavigationController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)contactNavigationController:(id)a0 contactViewControllerForContact:(id)a1 preferredMode:(long long)a2;
- (void)contactNavigationControllerDidCancel:(id)a0;
- (void)contactNavigationControllerDidComplete:(id)a0;
- (id)initWithVCardData:(id)a0;

@end
