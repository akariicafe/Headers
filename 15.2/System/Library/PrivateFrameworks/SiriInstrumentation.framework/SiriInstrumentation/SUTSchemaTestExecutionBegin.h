@class NSData, SUTSchemaTestContext;

@interface SUTSchemaTestExecutionBegin : SISchemaInstrumentationMessage {
    struct { unsigned char shouldPersistData : 1; } _has;
}

@property (retain, nonatomic) SUTSchemaTestContext *context;
@property (nonatomic) BOOL hasContext;
@property (nonatomic) BOOL shouldPersistData;
@property (nonatomic) BOOL hasShouldPersistData;
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
