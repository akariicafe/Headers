@class _UISlotView, UIColor, NSString;
@protocol LocationUIProtocol;

@interface CLLocationButton : UIControl <NSSecureCoding> {
    _UISlotView *_slotView;
    UIColor *_backgroundColor;
    UIColor *_tintColor;
    NSString *_sandboxExtension;
    struct CGSize { double width; double height; } _intrinsicSize;
    id<LocationUIProtocol> _proxy;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id<LocationUIProtocol> locationUIProxy;
@property (readonly, nonatomic) BOOL colorsIllegible;
@property (readonly, nonatomic) BOOL alphaInsufficient;
@property (nonatomic) long long icon;
@property (nonatomic) long long label;
@property (nonatomic) double fontSize;
@property (nonatomic) double cornerRadius;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)tintColor;
- (id)backgroundColor;
- (void)_populateArchivedSubviews:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)sendAction:(SEL)a0 to:(id)a1 forEvent:(id)a2;
- (void)setTintColor:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)markDirty;
- (void)setBackgroundColor:(id)a0;
- (void)_setupSlotView;
- (void)_actionForPreSetTarget;
- (void)_yieldSlotViewContentForLayerContextID:(unsigned long long)a0 slotStyle:(id)a1 withYieldBlock:(id /* block */)a2;
- (id)_computeLocationButtonTag;

@end
