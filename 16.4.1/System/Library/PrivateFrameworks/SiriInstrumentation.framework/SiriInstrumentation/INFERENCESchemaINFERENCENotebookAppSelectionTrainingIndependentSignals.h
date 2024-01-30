@class NSData, INFERENCESchemaINFERENCECommonAppIndependentSignals;

@interface INFERENCESchemaINFERENCENotebookAppSelectionTrainingIndependentSignals : SISchemaInstrumentationMessage {
    struct { unsigned char isNotebookTitlePresent : 1; unsigned char isNotebookPayloadPresent : 1; unsigned char isNotebookGroupPresent : 1; } _has;
}

@property (retain, nonatomic) INFERENCESchemaINFERENCECommonAppIndependentSignals *commonIndependent;
@property (nonatomic) BOOL hasCommonIndependent;
@property (nonatomic) BOOL isNotebookTitlePresent;
@property (nonatomic) BOOL hasIsNotebookTitlePresent;
@property (nonatomic) BOOL isNotebookPayloadPresent;
@property (nonatomic) BOOL hasIsNotebookPayloadPresent;
@property (nonatomic) BOOL isNotebookGroupPresent;
@property (nonatomic) BOOL hasIsNotebookGroupPresent;
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
- (void)deleteCommonIndependent;
- (void)deleteIsNotebookGroupPresent;
- (void)deleteIsNotebookPayloadPresent;
- (void)deleteIsNotebookTitlePresent;

@end
