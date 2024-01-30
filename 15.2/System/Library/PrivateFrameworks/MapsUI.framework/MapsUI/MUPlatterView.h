@class MKVibrantView, UIView;

@interface MUPlatterView : UIView {
    MKVibrantView *_visualEffectView;
}

@property (readonly, nonatomic) UIView *contentView;

- (id)initWithContentView:(id)a0;
- (void)layoutSubviews;
- (void)_setup;
- (void).cxx_destruct;
- (id)init;

@end
