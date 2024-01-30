@class PHFetchResult;

@interface PXFetchResultDataSection : PXDataSection

@property (readonly, nonatomic) PHFetchResult *fetchResult;

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)objectsAtIndexes:(id)a0;
- (long long)count;
- (id)objectAtIndex:(long long)a0;
- (id)initWithFetchResult:(id)a0;
- (void).cxx_destruct;
- (id)initWithOutlineObject:(id)a0;

@end
