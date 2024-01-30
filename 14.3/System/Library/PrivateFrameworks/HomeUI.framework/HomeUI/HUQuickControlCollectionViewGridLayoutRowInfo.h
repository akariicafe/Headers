@class NSArray;

@interface HUQuickControlCollectionViewGridLayoutRowInfo : NSObject

@property (nonatomic) unsigned long long numberOfItems;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) struct CGPoint { double x; double y; } rowOrigin;
@property (copy, nonatomic) NSArray *itemLayouts;

- (void).cxx_destruct;

@end
