@class NSData, MTSchemaMTError;

@interface MTSchemaMTBatchRequestFailed : SISchemaInstrumentationMessage {
    struct { unsigned char numParagraphFailures : 1; } _has;
}

@property (nonatomic) unsigned int numParagraphFailures;
@property (nonatomic) BOOL hasNumParagraphFailures;
@property (retain, nonatomic) MTSchemaMTError *error;
@property (nonatomic) BOOL hasError;
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
