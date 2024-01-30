@class MLMultiArray;

@interface MLMultiArrayAsNSArrayWrapper : NSArray

@property (retain) MLMultiArray *multiArray;

- (id)objectAtIndex:(unsigned long long)a0;
- (id)initWrappingMultiArray:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)count;

@end
