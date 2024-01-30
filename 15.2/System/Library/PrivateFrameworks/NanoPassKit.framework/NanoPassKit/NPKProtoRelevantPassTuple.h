@class NSString;

@interface NPKProtoRelevantPassTuple : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *passID;
@property (readonly, nonatomic) BOOL hasRelevantText;
@property (retain, nonatomic) NSString *relevantText;

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

@end
