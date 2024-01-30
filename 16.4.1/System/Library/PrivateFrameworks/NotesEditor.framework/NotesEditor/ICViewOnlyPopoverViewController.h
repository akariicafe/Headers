@class UILabel, NSString;
@protocol ICViewOnlyPopoverDelegate;

@interface ICViewOnlyPopoverViewController : UIViewController <UIPopoverPresentationControllerDelegate>

@property (retain, nonatomic) UILabel *label;
@property (weak, nonatomic) id<ICViewOnlyPopoverDelegate> popoverDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)viewOnlyPopoverViewController:(id)a0 sourceView:(id)a1;

- (void)presentationControllerDidDismiss:(id)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0 traitCollection:(id)a1;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;

@end
