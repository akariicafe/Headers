@interface CNPropertyAlertEditingCell : CNPropertyAlertCell

+ (BOOL)wantsHorizontalLayout;

- (id)variableConstraints;
- (double)minCellHeight;
- (BOOL)allowsCellSelection;

@end
