@class UIView;

@interface PUBadgeTransitionInfo : NSObject

@property (retain, nonatomic) UIView *snapshotView;
@property (nonatomic) struct UIOffset { double horizontal; double vertical; } badgesOffset;
@property (nonatomic) unsigned long long badgesCorner;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;

- (void).cxx_destruct;

@end
