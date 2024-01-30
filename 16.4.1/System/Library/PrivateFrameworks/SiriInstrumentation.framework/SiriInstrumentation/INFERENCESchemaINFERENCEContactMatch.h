@class INFERENCESchemaINFERENCEContactSignalSet, INFERENCESchemaINFERENCEContactFeatureSet, NSData, INFERENCESchemaINFERENCEBackgroundContactSignalSet, INFERENCESchemaINFERENCEContact;

@interface INFERENCESchemaINFERENCEContactMatch : SISchemaInstrumentationMessage {
    struct { unsigned char score : 1; unsigned char isShownToUser : 1; } _has;
}

@property (retain, nonatomic) INFERENCESchemaINFERENCEContact *contactValue;
@property (nonatomic) BOOL hasContactValue;
@property (retain, nonatomic) INFERENCESchemaINFERENCEContactSignalSet *contactSignalSet;
@property (nonatomic) BOOL hasContactSignalSet;
@property (retain, nonatomic) INFERENCESchemaINFERENCEBackgroundContactSignalSet *backgroundSignalSet;
@property (nonatomic) BOOL hasBackgroundSignalSet;
@property (retain, nonatomic) INFERENCESchemaINFERENCEContactFeatureSet *featureSet;
@property (nonatomic) BOOL hasFeatureSet;
@property (nonatomic) float score;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) BOOL isShownToUser;
@property (nonatomic) BOOL hasIsShownToUser;
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
- (void)deleteBackgroundSignalSet;
- (void)deleteContactSignalSet;
- (void)deleteContactValue;
- (void)deleteFeatureSet;
- (void)deleteIsShownToUser;
- (void)deleteScore;

@end
