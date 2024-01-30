@class NSMutableArray;

@interface BBMaskedSet : NSObject {
    unsigned long long _maskBits;
}

@property (retain, nonatomic) NSMutableArray *maskObjectSets;

- (void)addObject:(id)a0 withMask:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)removeObject:(id)a0;
- (id)objectsForMask:(unsigned long long)a0;
- (void)_executeUsingMask:(unsigned long long)a0 block:(id /* block */)a1;
- (id)allObjects;
- (id)initWithMaskBits:(unsigned long long)a0;
- (id)objectAtIndex:(unsigned long long)a0;

@end
