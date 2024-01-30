@class NSMutableDictionary;

@interface AVFragmentedAssetsArray : NSArray {
    unsigned long long _count;
    unsigned long long _firstSequenceNumber;
    NSMutableDictionary *_cachedFragments;
}

- (id)init;
- (void)dealloc;
- (unsigned long long)count;
- (id)initWithCount:(unsigned long long)a0 firstSequenceNumber:(unsigned long long)a1;
- (id)objectAtIndex:(unsigned long long)a0;

@end
