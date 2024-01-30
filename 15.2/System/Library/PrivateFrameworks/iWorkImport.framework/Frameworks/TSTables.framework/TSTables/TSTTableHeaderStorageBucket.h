@class NSIndexSet, TSUSparseArray;

@interface TSTTableHeaderStorageBucket : TSPObject

@property (retain, nonatomic) TSUSparseArray *data;
@property (readonly, nonatomic) unsigned long long count;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } bounds;
@property (readonly, nonatomic) unsigned int minIndex;
@property (readonly, nonatomic) unsigned int maxIndex;
@property (readonly, nonatomic) NSIndexSet *populatedIndexes;

- (void)setHeaders:(id)a0;
- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (id)packageLocator;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)initWithContext:(id)a0 bounds:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)mutableHeaderAtIndex:(unsigned int)a0 allowCreation:(BOOL)a1;
- (id)headerAtIndex:(unsigned int)a0;
- (void)setHeader:(id)a0 atIndex:(unsigned int)a1;
- (id)shiftIndexesForwardAtIndex:(unsigned int)a0 count:(unsigned int)a1;
- (id)shiftIndexesBackAtIndex:(unsigned int)a0 count:(unsigned int)a1;
- (void)enumerateHeadersWithBlock:(id /* block */)a0;

@end
