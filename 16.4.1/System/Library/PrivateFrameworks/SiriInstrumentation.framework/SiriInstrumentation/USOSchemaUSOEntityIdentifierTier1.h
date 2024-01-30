@class NSString, NSData;

@interface USOSchemaUSOEntityIdentifierTier1 : SISchemaInstrumentationMessage {
    struct { unsigned char index : 1; } _has;
}

@property (nonatomic) unsigned int index;
@property (nonatomic) BOOL hasIndex;
@property (copy, nonatomic) NSString *value;
@property (nonatomic) BOOL hasValue;
@property (copy, nonatomic) NSString *backingAppBundleId;
@property (nonatomic) BOOL hasBackingAppBundleId;
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
- (void)deleteBackingAppBundleId;
- (void)deleteIndex;
- (void)deleteValue;

@end
