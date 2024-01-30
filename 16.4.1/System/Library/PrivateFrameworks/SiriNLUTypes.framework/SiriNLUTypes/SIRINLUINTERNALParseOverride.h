@class NSString, SIRINLUEXTERNALUserParse, NSData, NSMutableArray;

@interface SIRINLUINTERNALParseOverride : PBCodable <NSCopying> {
    struct { unsigned char creationTimestampMsSinceUnixEpoch : 1; unsigned char parserIdentifier : 1; unsigned char enabled : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdA;
@property (retain, nonatomic) NSString *idA;
@property (nonatomic) BOOL hasEnabled;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL hasCreationTimestampMsSinceUnixEpoch;
@property (nonatomic) unsigned long long creationTimestampMsSinceUnixEpoch;
@property (nonatomic) BOOL hasParserIdentifier;
@property (nonatomic) int parserIdentifier;
@property (readonly, nonatomic) BOOL hasParse;
@property (retain, nonatomic) SIRINLUEXTERNALUserParse *parse;
@property (retain, nonatomic) NSMutableArray *nluRequestRules;
@property (readonly, nonatomic) BOOL hasSerializedParse;
@property (retain, nonatomic) NSData *serializedParse;

+ (Class)nluRequestRulesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (int)StringAsParserIdentifier:(id)a0;
- (void)addNluRequestRules:(id)a0;
- (void)clearNluRequestRules;
- (id)nluRequestRulesAtIndex:(unsigned long long)a0;
- (unsigned long long)nluRequestRulesCount;
- (id)parserIdentifierAsString:(int)a0;

@end
