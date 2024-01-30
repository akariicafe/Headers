@class NSString, NSData;

@interface SISchemaABExperimentAssetRetrievalStatusChanged : SISchemaInstrumentationMessage {
    struct { unsigned char retrievalStatusCode : 1; } _has;
}

@property (copy, nonatomic) NSString *experimentId;
@property (nonatomic) BOOL hasExperimentId;
@property (copy, nonatomic) NSString *assetId;
@property (nonatomic) BOOL hasAssetId;
@property (nonatomic) int retrievalStatusCode;
@property (nonatomic) BOOL hasRetrievalStatusCode;
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
