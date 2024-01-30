@class NSIndexSet, NSMutableIndexSet, NSMutableDictionary, NSNumber;

@interface TSCH3DActiveLabelsTypeBounds : NSObject {
    NSMutableIndexSet *_activeIndices;
    NSMutableDictionary *_map;
}

@property (readonly, copy, nonatomic) NSNumber *activeType;
@property (readonly, retain, nonatomic) NSIndexSet *activeIndices;

- (id)active;
- (id)init;
- (void).cxx_destruct;
- (void)addBounds:(id)a0;
- (BOOL)setActiveType:(long long)a0;
- (id)arrayAtIndex:(long long)a0;
- (BOOL)hasAnyCachedBoundsAtIndices:(id)a0;
- (BOOL)hasCachedBoundsAtIndex:(unsigned long long)a0;
- (BOOL)resetIndex:(long long)a0;

@end
