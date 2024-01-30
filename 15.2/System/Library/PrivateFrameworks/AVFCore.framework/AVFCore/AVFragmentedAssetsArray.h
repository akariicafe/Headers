@class NSMutableDictionary;

@interface AVFragmentedAssetsArray : NSArray {
    unsigned long long _count;
    unsigned long long _firstSequenceNumber;
    NSMutableDictionary *_cachedFragments;
}

- (id)objectAtIndex:(unsigned long long)a0;
- (id)initWithCount:(unsigned long long)a0 firstSequenceNumber:(unsigned long long)a1;
- (id)init;
- (unsigned long long)count;
- (void)dealloc;

@end
