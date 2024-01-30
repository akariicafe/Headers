@class SUGradientButton;

@interface SUButtonAccessoryView : UIView {
    SUGradientButton *_button;
}

@property (readonly, nonatomic) SUGradientButton *button;

- (void)dealloc;
- (void)layoutSubviews;
- (id)init;
- (id)initWithDefaultSize;

@end
