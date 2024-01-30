@class NSString, NSData, SISchemaUUID;

@interface CAMSchemaCAMClientEventMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char feature : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *camId;
@property (nonatomic) BOOL hasCamId;
@property (copy, nonatomic) NSString *resultCandidateId;
@property (nonatomic) BOOL hasResultCandidateId;
@property (nonatomic) int feature;
@property (nonatomic) BOOL hasFeature;
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
