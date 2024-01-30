@class NSMutableArray;

@interface CPLRampingResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *responses;

+ (Class)responseType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)responsesCount;
- (id)responseAtIndex:(unsigned long long)a0;
- (void)addResponse:(id)a0;
- (void)clearResponses;

@end
