@class NSString, NSArray, NSData, _PARSearchResponse_QueryFeatures, _PARSearchResponse_Error, NSDictionary;

@interface _PARSearchResponse : PBCodable <_PARSearchResponse, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int status;
@property (copy, nonatomic) NSString *prefix;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSArray *suggestions;
@property (nonatomic) BOOL suggestionsAreBlended;
@property (nonatomic) float completionScore;
@property (copy, nonatomic) NSData *feedback;
@property (nonatomic) int maxAgeSeconds;
@property (retain, nonatomic) _PARSearchResponse_Error *error;
@property (nonatomic) long long millisecondDuration;
@property (copy, nonatomic) NSString *partialClientAddress;
@property (retain, nonatomic) _PARSearchResponse_QueryFeatures *queryFeatures;
@property (copy, nonatomic) NSDictionary *blenderFeaturesL3;
@property (copy, nonatomic) NSArray *corrections;
@property (copy, nonatomic) NSArray *results;
@property (copy, nonatomic) NSArray *sections;
@property (copy, nonatomic) NSData *legacyJSON;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (void)clearSections;
- (id)sectionsAtIndex:(unsigned long long)a0;
- (void)addSections:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)addResults:(id)a0;
- (unsigned long long)resultsCount;
- (id)resultsAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)sectionsCount;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addSuggestions:(id)a0;
- (void)clearSuggestions;
- (id)suggestionsAtIndex:(unsigned long long)a0;
- (void)clearResults;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)suggestionsCount;
- (void)setBlenderFeaturesL3:(float)a0 forKey:(long long)a1;
- (void)addCorrections:(id)a0;
- (BOOL)getBlenderFeaturesL3:(float *)a0 forKey:(long long)a1;
- (void)clearCorrections;
- (unsigned long long)correctionsCount;
- (id)correctionsAtIndex:(unsigned long long)a0;

@end
