@class NSString, SIRINLUEXTERNALUserParse, NSMutableArray;

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

+ (Class)nluRequestRulesType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addNluRequestRules:(id)a0;
- (unsigned long long)nluRequestRulesCount;
- (void)clearNluRequestRules;
- (id)nluRequestRulesAtIndex:(unsigned long long)a0;
- (id)parserIdentifierAsString:(int)a0;
- (int)StringAsParserIdentifier:(id)a0;

@end
