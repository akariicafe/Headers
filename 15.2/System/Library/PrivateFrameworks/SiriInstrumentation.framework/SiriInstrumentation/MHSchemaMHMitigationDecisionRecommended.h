@class NSData;

@interface MHSchemaMHMitigationDecisionRecommended : SISchemaInstrumentationMessage {
    struct { unsigned char isMitigationRecommended : 1; } _has;
}

@property (nonatomic) BOOL isMitigationRecommended;
@property (nonatomic) BOOL hasIsMitigationRecommended;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
