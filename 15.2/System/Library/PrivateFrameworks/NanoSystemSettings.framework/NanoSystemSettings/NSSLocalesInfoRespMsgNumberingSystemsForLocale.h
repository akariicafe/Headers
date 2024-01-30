@class NSString, NSMutableArray;

@interface NSSLocalesInfoRespMsgNumberingSystemsForLocale : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *localeIdentifier;
@property (retain, nonatomic) NSMutableArray *numberingSystems;

+ (Class)numberingSystemType;

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
- (unsigned long long)numberingSystemsCount;
- (void)clearNumberingSystems;
- (void)addNumberingSystem:(id)a0;
- (id)numberingSystemAtIndex:(unsigned long long)a0;

@end
