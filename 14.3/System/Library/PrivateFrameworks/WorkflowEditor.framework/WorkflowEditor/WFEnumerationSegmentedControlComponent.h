@class WFEnumerationParameter;

@interface WFEnumerationSegmentedControlComponent : CKComponent {
    WFEnumerationParameter *_parameter;
    id /* block */ _updateBlock;
}

+ (id)newWithParameter:(id)a0 state:(id)a1 updateBlock:(id /* block */)a2 options:(struct WFParameterComponentOptions { BOOL x0; BOOL x1; BOOL x2; id x3; id x4; BOOL x5; id x6; id x7; })a3;
+ (double)minimumWidthForSegmentWithTitle:(id)a0;
+ (double)perSegmentWidthWithSegments:(id)a0;
+ (double)estimatedWidthWithSegments:(id)a0;

- (void).cxx_destruct;
- (void)segmentedControlSelectedSegmentChanged:(id)a0;

@end
