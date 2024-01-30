@class NSString, NSDictionary, _CPSearchResultForFeedback, NSArray, NSData;

@interface _CPResultRankingFeedback : PBCodable <_CPProcessableFeedback, _CPResultRankingFeedback, NSSecureCoding> {
    unsigned long long _timestamp;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) id feedbackJSON;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) _CPSearchResultForFeedback *result;
@property (copy, nonatomic) NSArray *hiddenResults;
@property (copy, nonatomic) NSArray *duplicateResults;
@property (nonatomic) unsigned int localResultPosition;
@property (nonatomic) double personalizationScore;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)addHiddenResults:(id)a0;
- (void)addDuplicateResults:(id)a0;
- (void)clearHiddenResults;
- (unsigned long long)hiddenResultsCount;
- (id)hiddenResultsAtIndex:(unsigned long long)a0;
- (void)clearDuplicateResults;
- (unsigned long long)duplicateResultsCount;
- (id)duplicateResultsAtIndex:(unsigned long long)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithFacade:(id)a0;

@end
