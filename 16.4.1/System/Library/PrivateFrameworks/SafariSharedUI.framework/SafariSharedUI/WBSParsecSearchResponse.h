@class NSArray, WBSParsecSearchCompletionResultSet;

@interface WBSParsecSearchResponse : NSObject {
    WBSParsecSearchCompletionResultSet *_bestResultSet;
}

@property (readonly, nonatomic) double maxAge;
@property (readonly, nonatomic) unsigned long long sizeInBytes;
@property (readonly, nonatomic) NSArray *completionResultSets;
@property (readonly, nonatomic) WBSParsecSearchCompletionResultSet *bestCompletionResultSet;
@property (readonly, nonatomic) NSArray *statusCodesForCompletionResultSets;

+ (id)searchResponseSchemaWithCache:(id)a0;

- (void).cxx_destruct;
- (id)initWithArray:(id)a0 responseHeaders:(id)a1 sizeInBytes:(unsigned long long)a2 cache:(id)a3;

@end
