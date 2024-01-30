@class NSString, NSArray, NSData, NSDictionary;

@interface _PARSearchResponse_QuerySuggestion : PBCodable <_PARSearchResponse_QuerySuggestion, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *suggestion;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSData *feedback;
@property (nonatomic) BOOL previouslyEngaged;
@property (nonatomic) float score;
@property (copy, nonatomic) NSArray *entities;
@property (copy, nonatomic) NSString *detailText;
@property (copy, nonatomic) NSDictionary *serverFeatures;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (void)clearEntities;
- (void)addEntities:(id)a0;
- (id)entitiesAtIndex:(unsigned long long)a0;
- (unsigned long long)entitiesCount;
- (void)setServerFeatures:(double)a0 forKey:(id)a1;
- (BOOL)getServerFeatures:(double *)a0 forKey:(id)a1;

@end
