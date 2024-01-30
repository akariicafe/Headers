@class SUGradientButton;

@interface SUButtonAccessoryView : UIView {
    SUGradientButton *_button;
}

@property (readonly, nonatomic) SUGradientButton *button;

- (id)init;
- (id)initWithDefaultSize;
- (void)dealloc;
- (void)layoutSubviews;

@end
