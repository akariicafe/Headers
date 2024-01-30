@class NSIndexSet, NSMutableIndexSet, NSMutableDictionary, NSNumber;

@interface TSCH3DActiveLabelsTypeBounds : NSObject {
    NSMutableIndexSet *_activeIndices;
    NSMutableDictionary *_map;
}

@property (readonly, copy, nonatomic) NSNumber *activeType;
@property (readonly, retain, nonatomic) NSIndexSet *activeIndices;

- (id)active;
- (void).cxx_destruct;
- (id)init;
- (BOOL)setActiveType:(long long)a0;
- (id)arrayAtIndex:(long long)a0;
- (BOOL)hasCachedBoundsAtIndex:(unsigned long long)a0;
- (BOOL)hasAnyCachedBoundsAtIndices:(id)a0;
- (void)addBounds:(id)a0;
- (BOOL)resetIndex:(long long)a0;

@end
