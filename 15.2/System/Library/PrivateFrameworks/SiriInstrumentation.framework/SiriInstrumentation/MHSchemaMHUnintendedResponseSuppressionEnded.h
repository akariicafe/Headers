@class NSString, NSData;

@interface MHSchemaMHUnintendedResponseSuppressionEnded : SISchemaInstrumentationMessage {
    struct { unsigned char score : 1; unsigned char threshold : 1; } _has;
}

@property (copy, nonatomic) NSString *modelVersion;
@property (nonatomic) BOOL hasModelVersion;
@property (nonatomic) float score;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) float threshold;
@property (nonatomic) BOOL hasThreshold;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
