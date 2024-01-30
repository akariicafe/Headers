@class NSString, NSArray, SISchemaLocaleIdentifier, NSData;

@interface SISchemaDictationContext : PBCodable

@property (copy, nonatomic) NSString *keyboardLanguage;
@property (nonatomic) BOOL hasKeyboardLanguage;
@property (retain, nonatomic) SISchemaLocaleIdentifier *keyboardLocale;
@property (nonatomic) BOOL hasKeyboardLocale;
@property (retain, nonatomic) SISchemaLocaleIdentifier *dictationLocale;
@property (nonatomic) BOOL hasDictationLocale;
@property (retain, nonatomic) SISchemaLocaleIdentifier *userSelectedLocale;
@property (nonatomic) BOOL hasUserSelectedLocale;
@property (retain, nonatomic) SISchemaLocaleIdentifier *siriSelectedLocale;
@property (nonatomic) BOOL hasSiriSelectedLocale;
@property (copy, nonatomic) NSArray *keyboardLocalesEnableds;
@property (copy, nonatomic) NSArray *dictationLocalesEnableds;
@property (copy, nonatomic) NSString *bundleId;
@property (nonatomic) BOOL hasBundleId;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (void)addKeyboardLocalesEnabled:(id)a0;
- (void)addDictationLocalesEnabled:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (void)clearKeyboardLocalesEnabled;
- (unsigned long long)keyboardLocalesEnabledCount;
- (id)keyboardLocalesEnabledAtIndex:(unsigned long long)a0;
- (void)clearDictationLocalesEnabled;
- (unsigned long long)dictationLocalesEnabledCount;
- (id)dictationLocalesEnabledAtIndex:(unsigned long long)a0;

@end
