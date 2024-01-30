@class HUDynamicAlignmentTitleValueCellLayoutOptions;

@interface HUDynamicAlignmentTitleValueCell : HUTitleValueCell

@property (retain, nonatomic) HUDynamicAlignmentTitleValueCellLayoutOptions *layoutOptions;

- (void).cxx_destruct;
- (void)_ensureCorrectHeaderViewOrientation;
- (BOOL)useVerticalLayout;

@end
