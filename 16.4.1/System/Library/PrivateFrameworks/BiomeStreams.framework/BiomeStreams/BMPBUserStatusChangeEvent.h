@class NSString, NSMutableArray;

@interface BMPBUserStatusChangeEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasIdsHandle;
@property (retain, nonatomic) NSString *idsHandle;
@property (readonly, nonatomic) BOOL hasStatusChangeType;
@property (retain, nonatomic) NSString *statusChangeType;
@property (retain, nonatomic) NSMutableArray *idsHandles;

+ (Class)idsHandlesType;

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
- (void)clearIdsHandles;
- (unsigned long long)idsHandlesCount;
- (void)addIdsHandles:(id)a0;
- (id)idsHandlesAtIndex:(unsigned long long)a0;

@end
