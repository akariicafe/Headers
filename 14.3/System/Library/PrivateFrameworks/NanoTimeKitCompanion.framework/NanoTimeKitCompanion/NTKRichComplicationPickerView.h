@class NSString, NSMutableDictionary;

@interface NTKRichComplicationPickerView : UIView <NTKEditOptionContainerView> {
    NSMutableDictionary *_sideViews;
    double _fraction;
    unsigned long long _fromSide;
    unsigned long long _toSide;
    long long _animationType;
}

@property (readonly, nonatomic) unsigned long long numberOfSides;
@property (readonly, nonatomic) unsigned long long numberOfVisibleSides;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)_updateViews;
- (id)initWithMaskImage:(id)a0 animationType:(long long)a1;
- (void)enumerateSideViewsWithBlock:(id /* block */)a0;
- (void)setView:(id)a0 forSideAtIndex:(unsigned long long)a1;
- (void)transitionToSideAtIndex:(unsigned long long)a0;
- (id)viewForSideAtIndex:(unsigned long long)a0;
- (void)transitionToFraction:(double)a0 fromSideAtIndex:(unsigned long long)a1 toSideAtIndex:(unsigned long long)a2;

@end
