@class NSMutableArray;

@interface BBMaskedSet : NSObject {
    unsigned long long _maskBits;
}

@property (retain, nonatomic) NSMutableArray *maskObjectSets;

- (void)addObject:(id)a0 withMask:(unsigned long long)a1;
- (id)objectsForMask:(unsigned long long)a0;
- (void)removeObject:(id)a0;
- (id)initWithMaskBits:(unsigned long long)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)allObjects;
- (void)_executeUsingMask:(unsigned long long)a0 block:(id /* block */)a1;
- (void).cxx_destruct;

@end
