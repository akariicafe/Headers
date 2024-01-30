@class UIColor, NSString, _UISlotView, NSLayoutConstraint;
@protocol LocationUIProtocol;

@interface CLLocationButton : UIControl <NSSecureCoding> {
    _UISlotView *_slotView;
    UIColor *_backgroundColor;
    UIColor *_tintColor;
    NSString *_sandboxExtension;
    struct CGSize { double width; double height; } _intrinsicSize;
    NSLayoutConstraint *_minimumWidthConstraint;
    NSLayoutConstraint *_minimumHeightConstraint;
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

- (unsigned long long)_controlEventsForActionTriggered;
- (void)_sendActionsForEvents:(unsigned long long)a0 withEvent:(id)a1;
- (id)tintColor;
- (void)encodeWithCoder:(id)a0;
- (id)backgroundColor;
- (id)initWithCoder:(id)a0;
- (void)_populateArchivedSubviews:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setTintColor:(id)a0;
- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;
- (unsigned int)_secureName;
- (void)_setupSlotView;
- (void)markDirty;
- (void)_actionForPreSetTarget;
- (id)_computeLocationButtonTag;
- (void)_yieldSlotViewContentForLayerContextID:(unsigned long long)a0 slotStyle:(id)a1 withYieldBlock:(id /* block */)a2;

@end
