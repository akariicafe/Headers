@class NSArray;

@interface _UIVisualEffectDifferenceEngine : NSObject {
    long long _sourceCount;
    long long _destinationCount;
    long long _prefixCount;
    long long _suffixCount;
    long long _innerSourceCount;
    long long _innerDestinationCount;
    long long *_mergeTable;
    NSArray *_merged;
}

@property (copy, nonatomic) NSArray *source;
@property (copy, nonatomic) NSArray *destination;
@property (readonly, copy, nonatomic) NSArray *merged;

- (void)_reset;
- (void)_calculateLCSSTable;
- (id)describeMergeTable;
- (id)description;
- (void).cxx_destruct;
- (id)mergeSource:(id)a0 andDestination:(id)a1;
- (void)_calculatePrefixAndSuffix;
- (void)dealloc;
- (void)_calculateMerge;
- (void)_calculate;

@end
