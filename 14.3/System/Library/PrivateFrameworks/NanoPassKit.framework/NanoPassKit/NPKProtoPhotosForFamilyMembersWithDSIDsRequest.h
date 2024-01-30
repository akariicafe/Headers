@class NSMutableArray;

@interface NPKProtoPhotosForFamilyMembersWithDSIDsRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSMutableArray *requestDSIDs;

+ (Class)requestDSIDsType;

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
- (void)addRequestDSIDs:(id)a0;
- (unsigned long long)requestDSIDsCount;
- (void)clearRequestDSIDs;
- (id)requestDSIDsAtIndex:(unsigned long long)a0;

@end
