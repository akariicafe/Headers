@interface CNPropertyAlertEditingCell : CNPropertyAlertCell

+ (BOOL)wantsHorizontalLayout;

- (BOOL)allowsCellSelection;
- (double)minCellHeight;
- (id)variableConstraints;

@end
