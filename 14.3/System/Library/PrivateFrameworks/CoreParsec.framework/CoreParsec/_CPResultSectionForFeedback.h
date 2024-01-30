@class NSArray, NSString, NSData;

@interface _CPResultSectionForFeedback : PBCodable <_CPResultSectionForFeedback, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *results;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) double rankingScore;
@property (copy, nonatomic) NSData *fallbackResultSection;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) int knownBundleIdentifier;
@property (nonatomic) BOOL isInitiallyHidden;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichBundleid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (void)addResults:(id)a0;
- (unsigned long long)resultsCount;
- (id)resultsAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (id)feedbackJSON;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearBundleid;
- (void)clearResults;
- (id)initWithDictionary:(id)a0;
- (id)initWithFacade:(id)a0;

@end
