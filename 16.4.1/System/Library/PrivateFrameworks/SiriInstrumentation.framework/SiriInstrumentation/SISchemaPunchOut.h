@class NSString, NSData, SISchemaViewContainer;

@interface SISchemaPunchOut : SISchemaInstrumentationMessage {
    struct { unsigned char punchOutUI : 1; unsigned char isPunchoutToHomeScreen : 1; } _has;
}

@property (copy, nonatomic) NSString *appID;
@property (nonatomic) BOOL hasAppID;
@property (copy, nonatomic) NSString *urlScheme;
@property (nonatomic) BOOL hasUrlScheme;
@property (retain, nonatomic) SISchemaViewContainer *viewContainer;
@property (nonatomic) BOOL hasViewContainer;
@property (copy, nonatomic) NSData *viewElementID;
@property (nonatomic) BOOL hasViewElementID;
@property (nonatomic) int punchOutUI;
@property (nonatomic) BOOL hasPunchOutUI;
@property (nonatomic) BOOL isPunchoutToHomeScreen;
@property (nonatomic) BOOL hasIsPunchoutToHomeScreen;
@property (copy, nonatomic) NSString *aceID;
@property (nonatomic) BOOL hasAceID;
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
- (void)deleteUrlScheme;
- (void)deleteAceID;
- (void)deleteAppID;
- (void)deleteIsPunchoutToHomeScreen;
- (void)deletePunchOutUI;
- (void)deleteViewContainer;
- (void)deleteViewElementID;

@end
