@class NSArray;

@interface _EARCombinedResult : _EARSystemResult

@property (copy, nonatomic) NSArray *nBestStrings;
@property (copy, nonatomic) NSArray *nBestSourceIndexes;
@property (copy, nonatomic) NSArray *originalRanks;

- (void).cxx_destruct;

@end
