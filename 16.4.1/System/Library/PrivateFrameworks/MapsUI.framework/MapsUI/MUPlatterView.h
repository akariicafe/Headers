@class MKVibrantView, UIView;

@interface MUPlatterView : UIView {
    MKVibrantView *_visualEffectView;
}

@property (readonly, nonatomic) UIView *contentView;

- (id)initWithContentView:(id)a0;
- (void)_setup;
- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;

@end
