@class NSArray;

@interface NTKZeusHourLabelCollectionNode : NTKHourLabelCollectionNode {
    unsigned long long _bleed;
    struct CGPoint { double x; double y; } _childrenDefaultPositions[12];
    struct CGPoint { double x; double y; } _childrenStatusPositions[12];
}

@property (retain, nonatomic) NSArray *visibleNodesForCurrentDensity;
@property (nonatomic) unsigned long long density;

+ (id)hours12ZeusWithFont:(long long)a0 bleed:(unsigned long long)a1 forDevice:(id)a2;

- (void).cxx_destruct;
- (void)applyTransitionFraction:(double)a0 fromDensity:(unsigned long long)a1 toDensity:(unsigned long long)a2;
- (void)createSubNodes;
- (struct CGPoint { double x0; double x1; })childStatusPositionForIndex:(long long)a0;
- (struct CGPoint { double x0; double x1; })childDefaultPositionForIndex:(long long)a0;
- (id)initWithFont:(long long)a0 bleed:(unsigned long long)a1 forDevice:(id)a2;
- (void)_setupPositions;
- (BOOL)_hourNumberAtIndex:(unsigned long long)a0 isVisibleWithDensity:(unsigned long long)a1;

@end
