@class NSMutableArray;

@interface NPKProtoPhotosForFamilyMembersWithDSIDsRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSMutableArray *requestDSIDs;

+ (Class)requestDSIDsType;

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
- (void)addRequestDSIDs:(id)a0;
- (void)clearRequestDSIDs;
- (id)requestDSIDsAtIndex:(unsigned long long)a0;
- (unsigned long long)requestDSIDsCount;

@end
