@class NSMutableArray, NSMutableDictionary;

@interface PUCollectionViewData : NSObject

@property (readonly, nonatomic) long long cachedPageCount;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } currentContentBounds;
@property (readonly, nonatomic) NSMutableArray *itemLayoutAttributes;
@property (readonly, nonatomic) NSMutableDictionary *itemLayoutAttributesByIndexPath;

- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (BOOL)hasReferenceIndexPath;

@end
