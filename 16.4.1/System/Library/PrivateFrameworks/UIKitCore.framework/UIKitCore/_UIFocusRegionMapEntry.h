@class UIColor, NSMutableSet;

@interface _UIFocusRegionMapEntry : NSObject <NSCopying>

@property (readonly, copy, nonatomic) UIColor *visualRepresentationColor;
@property (readonly, nonatomic) long long visualRepresentationPatternType;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originalRegionFrame;
@property (retain, nonatomic) _UIFocusRegionMapEntry *originalEntry;
@property (retain, nonatomic) _UIFocusRegionMapEntry *parentEntry;
@property (retain, nonatomic) NSMutableSet *occludingFrames;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)_uniqueElementFromArray:(id)a0 forKey:(id)a1;
- (id)sliceWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_mapEntriesByOccludingWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_wasOccludedByFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 originalRegionFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
