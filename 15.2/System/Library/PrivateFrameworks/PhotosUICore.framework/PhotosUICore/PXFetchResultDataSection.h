@class PHFetchResult;

@interface PXFetchResultDataSection : PXDataSection

@property (readonly, nonatomic) PHFetchResult *fetchResult;

- (id)initWithOutlineObject:(id)a0;
- (id)objectAtIndex:(long long)a0;
- (id)objectsAtIndexes:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void).cxx_destruct;
- (long long)count;
- (id)initWithFetchResult:(id)a0;

@end
