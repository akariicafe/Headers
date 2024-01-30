@class NSString, NSData, SUTSchemaTestSessionInfo;

@interface SUTSchemaTestContext : SISchemaInstrumentationMessage {
    struct { unsigned char testType : 1; } _has;
}

@property (copy, nonatomic) NSString *testName;
@property (nonatomic) BOOL hasTestName;
@property (nonatomic) int testType;
@property (nonatomic) BOOL hasTestType;
@property (retain, nonatomic) SUTSchemaTestSessionInfo *testSessionInfo;
@property (nonatomic) BOOL hasTestSessionInfo;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (void)deleteTestName;
- (void)deleteTestSessionInfo;
- (void)deleteTestType;

@end
