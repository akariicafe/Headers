@class NSArray;

@interface VIRegionOfInterestResult : NSObject <NSCopying>

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedBoundingBox;
@property (readonly, nonatomic) NSArray *resultItems;
@property (readonly, nonatomic) NSArray *searchSections;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithNormalizedBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 resultItems:(id)a1 searchSections:(id)a2;

@end
