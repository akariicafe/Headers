@class NSString, NSMutableArray;

@interface _UIBlendingHighlightView : UIView <UIInterfaceActionVisualBackgroundDisplaying, UIInterfaceActionVisualGroupBackgroundDisplaying> {
    NSMutableArray *_blendingViews;
}

@property (nonatomic) double cornerRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isBorderView;
+ (id)_blendingSeparatorView;
+ (id)_blendingPressedView;

- (void)setPressed:(BOOL)a0;
- (id)initWithTopLevelFilters:(id)a0 compositingColors:(id)a1 compositingFilterModes:(id)a2;
- (void)_setContinuousCornerRadius:(double)a0;
- (void).cxx_destruct;
- (id)initWithCompositingBurnColor:(id)a0 plusDColor:(id)a1;
- (void)layoutSubviews;
- (void)setRoundedCornerPosition:(unsigned long long)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_effectiveNonDirectionalContentInsets;
- (void)_enumerateAllBlendingViewsWithBlock:(id /* block */)a0;
- (void)_enumerateBlendingBorderViewsWithBlock:(id /* block */)a0;
- (void)setHighlighted:(BOOL)a0;

@end
