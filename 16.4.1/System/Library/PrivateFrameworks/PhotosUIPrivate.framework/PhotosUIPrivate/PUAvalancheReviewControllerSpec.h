@interface PUAvalancheReviewControllerSpec : NSObject

@property (readonly, nonatomic) double interItemSpacing;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } selectionBadgeSize;
@property (readonly, nonatomic) struct UIOffset { double x0; double x1; } selectionBadgeOffset;
@property (readonly, nonatomic) unsigned long long selectionBadgeCorner;

- (BOOL)allowsInterfaceRotation;

@end
