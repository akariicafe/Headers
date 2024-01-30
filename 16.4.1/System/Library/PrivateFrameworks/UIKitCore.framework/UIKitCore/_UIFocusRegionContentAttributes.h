@class _UIFocusRegion;

@interface _UIFocusRegionContentAttributes : NSObject <NSCopying>

@property (retain, nonatomic) _UIFocusRegion *contentRegion;
@property (nonatomic) BOOL requiresIntersectionWithFocusMapSearchArea;

+ (id)attributesForFocusRegionContentInContainer:(id)a0 coordinateSpace:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
