@class NSString, NSMutableArray;

@interface BMPBUserStatusChangeEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasIdsHandle;
@property (retain, nonatomic) NSString *idsHandle;
@property (readonly, nonatomic) BOOL hasStatusChangeType;
@property (retain, nonatomic) NSString *statusChangeType;
@property (retain, nonatomic) NSMutableArray *idsHandles;

+ (Class)idsHandlesType;

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
- (void)addIdsHandles:(id)a0;
- (unsigned long long)idsHandlesCount;
- (void)clearIdsHandles;
- (id)idsHandlesAtIndex:(unsigned long long)a0;

@end
