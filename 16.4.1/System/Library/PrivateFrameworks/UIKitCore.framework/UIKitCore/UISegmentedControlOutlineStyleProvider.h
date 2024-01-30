@interface UISegmentedControlOutlineStyleProvider : UISegmentedControlDefaultStyleProvider

- (double)defaultContentPaddingWidth;
- (id)fontForControlSize:(int)a0 selected:(BOOL)a1;
- (double)defaultHeightForControlSize:(int)a0;
- (BOOL)animateSelectionSliding;
- (id)fontColorForSegment:(id)a0 enabled:(BOOL)a1 selected:(BOOL)a2 state:(unsigned long long)a3;
- (double)defaultTextContentPaddingWidth;
- (BOOL)useSelectionIndicatorStyling;

@end
