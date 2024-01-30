@class SUGradientButton;

@interface SUButtonAccessoryView : UIView {
    SUGradientButton *_button;
}

@property (readonly, nonatomic) SUGradientButton *button;

- (void)layoutSubviews;
- (id)init;
- (id)initWithDefaultSize;
- (void)dealloc;

@end
