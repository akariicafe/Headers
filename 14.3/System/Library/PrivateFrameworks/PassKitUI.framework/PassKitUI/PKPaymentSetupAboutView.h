@class UIScrollView, UILabel;

@interface PKPaymentSetupAboutView : UIView {
    UILabel *_aboutTextLabel;
}

@property (readonly, nonatomic) UIScrollView *scrollView;

- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithBodyText:(id)a0 detailButtonText:(id)a1;
- (id)initWithBodyText:(id)a0;

@end
