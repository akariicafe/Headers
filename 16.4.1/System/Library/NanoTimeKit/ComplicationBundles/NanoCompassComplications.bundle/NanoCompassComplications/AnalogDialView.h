@class NSArray, NSDictionary, UIView;

@interface AnalogDialView : UIView {
    NSArray *_moduloGroups;
    NSDictionary *_moduloToGroup;
    NSArray *_textLayers;
    UIView *_tickContainer;
}

@property (readonly) NSArray *tickGroups;
@property (readonly) double dialDiameter;

+ (id)richCircularLevelSubdialForDevice:(id)a0 andComplicationFamily:(long long)a1;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)addTicksWithCount:(unsigned long long)a0 moduloGroups:(id)a1 sizes:(id)a2 roundedCorners:(id)a3;
- (void)applyTickColor:(id)a0 toGroupIndex:(unsigned long long)a1;
- (void)applyTickColor:(id)a0 toModulo:(unsigned long long)a1;
- (id)initWithDialDiameter:(double)a0;

@end
