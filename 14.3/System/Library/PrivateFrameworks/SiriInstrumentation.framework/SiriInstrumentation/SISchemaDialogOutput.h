@class NSString, NSData, SISchemaRedactableString;

@interface SISchemaDialogOutput : PBCodable

@property (copy, nonatomic) NSString *viewID;
@property (nonatomic) BOOL hasViewID;
@property (retain, nonatomic) SISchemaRedactableString *spokenDialogOutput;
@property (nonatomic) BOOL hasSpokenDialogOutput;
@property (retain, nonatomic) SISchemaRedactableString *displayedDialogOutput;
@property (nonatomic) BOOL hasDisplayedDialogOutput;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end
