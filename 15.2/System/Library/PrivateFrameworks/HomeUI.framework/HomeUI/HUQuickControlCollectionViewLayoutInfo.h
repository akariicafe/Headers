@class NSMutableArray;

@interface HUQuickControlCollectionViewLayoutInfo : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } availableContentFrame;
@property (nonatomic) struct CGSize { double width; double height; } collectionViewContentSize;
@property (retain, nonatomic) NSMutableArray *layoutDetailsArray;

- (void).cxx_destruct;

@end
