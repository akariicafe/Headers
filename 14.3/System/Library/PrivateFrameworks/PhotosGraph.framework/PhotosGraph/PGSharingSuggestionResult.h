@class NSArray, NSDictionary;
@protocol PGPersonResult;

@interface PGSharingSuggestionResult : NSObject

@property (readonly, nonatomic) double weight;
@property (readonly, nonatomic) double sourceWeight;
@property (readonly, nonatomic) NSArray *sourceNames;
@property (nonatomic) BOOL useContactSuggestion;
@property (readonly, nonatomic) id<PGPersonResult> person;
@property (readonly, nonatomic) double score;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

+ (id)suggestionResultWithPerson:(id)a0 weight:(double)a1 sourceWeight:(double)a2 sourceName:(id)a3;

- (void).cxx_destruct;
- (id)description;
- (id)initWithPerson:(id)a0 weight:(double)a1 sourceWeight:(double)a2 sourceName:(id)a3;
- (void)mergeWithSuggestionResult:(id)a0;

@end
