@class NPNameParser, NSMutableDictionary, NSDictionary, NSCharacterSet;

@interface CLSSocialServiceCoreNameParser : CLSSocialService

@property (retain) NPNameParser *nameParser;
@property (retain, nonatomic) NSMutableDictionary *sexHintByCNIdentifier;
@property (retain, nonatomic) NSDictionary *vocabularyByRelationshipByLocale;
@property (retain, nonatomic) NSMutableDictionary *regularExpressionByRelationshipByLocale;
@property (retain, nonatomic) NSCharacterSet *nonLetterCharacterSet;

+ (id)_dictionaryKeyForPersonRelationship:(unsigned long long)a0;
+ (unsigned long long)_personRelationshipFromString:(id)a0;

- (unsigned long long)relationshipHintForPerson:(id)a0 usingLocales:(id)a1;
- (unsigned long long)sexHintForPerson:(id)a0 usingLocales:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)invalidateMemoryCaches;
- (unsigned long long)_sexHintForRelationship:(unsigned long long)a0;
- (id)_normalizeName:(id)a0;
- (id)_parentRelationships;
- (id)_regularExpressionForRelationship:(unsigned long long)a0 languageCode:(id)a1;

@end
