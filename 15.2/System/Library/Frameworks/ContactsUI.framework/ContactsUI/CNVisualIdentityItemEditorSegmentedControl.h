@interface CNVisualIdentityItemEditorSegmentedControl : UISegmentedControl

+ (id)segmentedControlForItemType:(unsigned long long)a0;

- (id)initWithItems:(id)a0;
- (void)setTextAndStyleMode;
- (void)setTextSegmentEnabled:(BOOL)a0;
- (void)setStyleSegmentEnabled:(BOOL)a0;
- (void)selectTextSegment;
- (void)selectStyleSegment;
- (void)setStyleOnlyMode;

@end
