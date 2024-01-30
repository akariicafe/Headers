@class NSString, NSMutableArray;

@interface NSSLocalesInfoRespMsgNumberingSystemsForLocale : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *localeIdentifier;
@property (retain, nonatomic) NSMutableArray *numberingSystems;

+ (Class)numberingSystemType;

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
- (void)addNumberingSystem:(id)a0;
- (void)clearNumberingSystems;
- (id)numberingSystemAtIndex:(unsigned long long)a0;
- (unsigned long long)numberingSystemsCount;

@end
