@class NSString, NSArray, NSData;

@interface NLXSchemaCDMToken : SISchemaInstrumentationMessage {
    struct { unsigned char begin : 1; unsigned char end : 1; unsigned char isSignificant : 1; unsigned char isWhitespace : 1; unsigned char tokenIndex : 1; unsigned char nonWhitespaceTokenIndex : 1; } _has;
}

@property (copy, nonatomic) NSString *value;
@property (nonatomic) BOOL hasValue;
@property (nonatomic) unsigned int begin;
@property (nonatomic) BOOL hasBegin;
@property (nonatomic) unsigned int end;
@property (nonatomic) BOOL hasEnd;
@property (nonatomic) BOOL isSignificant;
@property (nonatomic) BOOL hasIsSignificant;
@property (nonatomic) BOOL isWhitespace;
@property (nonatomic) BOOL hasIsWhitespace;
@property (nonatomic) unsigned int tokenIndex;
@property (nonatomic) BOOL hasTokenIndex;
@property (nonatomic) unsigned int nonWhitespaceTokenIndex;
@property (nonatomic) BOOL hasNonWhitespaceTokenIndex;
@property (copy, nonatomic) NSString *cleanValue;
@property (nonatomic) BOOL hasCleanValue;
@property (copy, nonatomic) NSArray *normalizedValues;
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
- (void)addNormalizedValues:(id)a0;
- (void)clearNormalizedValues;
- (void)deleteBegin;
- (void)deleteCleanValue;
- (void)deleteEnd;
- (void)deleteIsSignificant;
- (void)deleteIsWhitespace;
- (void)deleteNonWhitespaceTokenIndex;
- (void)deleteNormalizedValues;
- (void)deleteTokenIndex;
- (void)deleteValue;
- (id)normalizedValuesAtIndex:(unsigned long long)a0;
- (unsigned long long)normalizedValuesCount;

@end
