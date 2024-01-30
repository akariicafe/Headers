@class NSMutableArray;

@interface NPKProtoListSubcredentialInvitationsResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *subcredentialInvitationsDatas;

+ (Class)subcredentialInvitationsDataType;

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
- (void)addSubcredentialInvitationsData:(id)a0;
- (unsigned long long)subcredentialInvitationsDatasCount;
- (void)clearSubcredentialInvitationsDatas;
- (id)subcredentialInvitationsDataAtIndex:(unsigned long long)a0;

@end
