@interface UITableConstants_Watch : UITableConstants_Phone

+ (id)sharedConstants;

- (id)defaultCheckmarkImageForCell:(id)a0;
- (BOOL)useChromelessSectionHeadersAndFootersForTableStyle:(long long)a0;
- (struct _UITableConstantsBackgroundProperties { BOOL x0; id x1; id x2; BOOL x3; long long x4; long long x5; double x6; double x7; BOOL x8; id x9; double x10; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x11; })defaultHeaderFooterBackgroundPropertiesForTableViewStyle:(long long)a0 tableBackgroundColor:(id)a1 floating:(BOOL)a2;

@end
