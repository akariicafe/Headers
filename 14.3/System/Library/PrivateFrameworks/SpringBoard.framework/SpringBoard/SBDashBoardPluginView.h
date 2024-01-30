@interface SBDashBoardPluginView : CSCoverSheetViewBase

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } presentationRegion;

- (id)presentationRegions;

@end
