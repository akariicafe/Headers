@class NSString, NSDictionary, NSArray, NSData;

@interface _CPRankingFeedback : PBCodable <_CPProcessableFeedback, _CPRankingFeedback, NSSecureCoding> {
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
@property (nonatomic) double blendingDuration;
@property (copy, nonatomic) NSArray *sections;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)clearSections;
- (id)sectionsAtIndex:(unsigned long long)a0;
- (void)addSections:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)sectionsCount;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithFacade:(id)a0;

@end
