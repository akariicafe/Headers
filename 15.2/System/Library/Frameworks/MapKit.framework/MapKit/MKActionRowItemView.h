@class MKVibrantView, NSArray, UIImageView, MKPlaceCardActionItem, _MKUILabel, UIView;
@protocol MKActionRowItemViewDelegate;

@interface MKActionRowItemView : UIButton {
    _MKUILabel *_label;
    UIImageView *_glyphImageView;
    MKVibrantView *_vibrantView;
    UIView *_backgroundView;
    unsigned long long _style;
    NSArray *_constraints;
}

@property (weak, nonatomic) id<MKActionRowItemViewDelegate> delegate;
@property (retain, nonatomic) MKPlaceCardActionItem *actionRowItem;
@property (nonatomic) BOOL touched;
@property (nonatomic) BOOL fullWidthMode;
@property (nonatomic) BOOL hovering;
@property (nonatomic) BOOL showSelectedState;

+ (id)labelFont;
+ (id)widthDictionary;
+ (double)widthBrandItem;
+ (double)minWidthForString:(id)a0 forSize:(id)a1;
+ (id)glyphFont;

- (void)layoutSubviews;
- (void)updateImage;
- (void)_contentSizeDidChange;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)handlePress;
- (void)updateColor;
- (void)handleHoverGesture:(id)a0;
- (void)_touchCancelled;
- (void)_touchEnded;
- (id)initWithActionRowItem:(id)a0 menuElement:(id)a1 style:(unsigned long long)a2;
- (void).cxx_destruct;
- (void)_touchBegan;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)tintColorDidChange;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)infoCardThemeChanged;
- (void)createConstraints;

@end
