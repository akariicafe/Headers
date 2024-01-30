@class NSData, SISchemaRequestLinkInfo;

@interface SISchemaRequestLink : SISchemaTopLevelUnionType

@property (retain, nonatomic) SISchemaRequestLinkInfo *source;
@property (nonatomic) BOOL hasSource;
@property (retain, nonatomic) SISchemaRequestLinkInfo *target;
@property (nonatomic) BOOL hasTarget;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (id)qualifiedMessageName;
- (int)getAnyEventType;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
