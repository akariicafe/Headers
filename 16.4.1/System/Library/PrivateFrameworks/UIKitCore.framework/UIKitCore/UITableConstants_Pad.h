@interface UITableConstants_Pad : UITableConstants_IOS

+ (id)sharedConstants;

- (struct _UITableConstantsBackgroundProperties { BOOL x0; id x1; id x2; BOOL x3; long long x4; long long x5; double x6; double x7; BOOL x8; id x9; long long x10; double x11; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x12; })defaultCellBackgroundPropertiesForTableViewStyle:(long long)a0 state:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })defaultLayoutMarginsForCell:(id)a0 inTableView:(id)a1;
- (double)defaultRowHeightForTableView:(id)a0;
- (double)defaultRowHeightForTableView:(id)a0 cellStyle:(long long)a1;
- (struct _UITableConstantsBackgroundProperties { BOOL x0; id x1; id x2; BOOL x3; long long x4; long long x5; double x6; double x7; BOOL x8; id x9; long long x10; double x11; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x12; })defaultSidebarCellBackgroundPropertiesWithState:(id)a0 traitCollection:(id)a1 isAccompanied:(BOOL)a2;
- (double)minimumContentViewHeightForFont:(id)a0 traitCollection:(id)a1;
- (BOOL)supportsUserInterfaceStyles;

@end
