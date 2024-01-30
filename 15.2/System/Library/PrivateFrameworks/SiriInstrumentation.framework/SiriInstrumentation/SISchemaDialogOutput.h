@class NSString, NSData, SISchemaRedactableString;

@interface SISchemaDialogOutput : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *viewID;
@property (nonatomic) BOOL hasViewID;
@property (retain, nonatomic) SISchemaRedactableString *spokenDialogOutput;
@property (nonatomic) BOOL hasSpokenDialogOutput;
@property (retain, nonatomic) SISchemaRedactableString *displayedDialogOutput;
@property (nonatomic) BOOL hasDisplayedDialogOutput;
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
