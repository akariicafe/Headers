@class MLMultiArray;

@interface MLMultiArrayAsNSArrayWrapper : NSArray

@property (retain) MLMultiArray *multiArray;

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)initWrappingMultiArray:(id)a0;
- (id)objectAtIndex:(unsigned long long)a0;

@end
