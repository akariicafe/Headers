@class NSMutableArray;

@interface NTPBErrorResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *errors;

+ (Class)errorsType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)errorsCount;
- (void)addErrors:(id)a0;
- (id)errorsAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearErrors;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
