@interface UITableConstants_Pad : UITableConstants_IOS

+ (id)sharedConstants;

- (struct _UITableConstantsBackgroundProperties { BOOL x0; id x1; id x2; BOOL x3; long long x4; double x5; double x6; BOOL x7; id x8; })defaultCellBackgroundPropertiesForTableViewStyle:(long long)a0 state:(id)a1;
- (double)defaultRowHeightForTableView:(id)a0 cellStyle:(long long)a1;
- (BOOL)supportsUserInterfaceStyles;
- (double)minimumContentViewHeightForFont:(id)a0 traitCollection:(id)a1;
- (double)defaultRowHeightForTableView:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })defaultLayoutMarginsForCell:(id)a0 inTableView:(id)a1;

@end
