@class NSMutableArray, NSMutableDictionary;

@interface PUSectionedGridLayoutData : NSObject

@property (readonly, nonatomic) long long numberOfPagesToCache;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } currentContentBounds;
@property (readonly, nonatomic) NSMutableArray *headerLayoutAttributes;
@property (readonly, nonatomic) NSMutableDictionary *headerLayoutAttributesByVisualSection;

- (id)init;
- (void)invalidate;
- (void).cxx_destruct;

@end
