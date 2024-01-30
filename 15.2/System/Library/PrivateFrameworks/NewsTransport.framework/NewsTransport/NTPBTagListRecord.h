@class NSMutableArray, NTPBRecordBase;

@interface NTPBTagListRecord : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasBase;
@property (retain, nonatomic) NTPBRecordBase *base;
@property (retain, nonatomic) NSMutableArray *tagIDs;

+ (Class)tagIDsType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)addTagIDs:(id)a0;
- (void)clearTagIDs;
- (unsigned long long)tagIDsCount;
- (id)tagIDsAtIndex:(unsigned long long)a0;

@end
