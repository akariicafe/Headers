@class NSMutableArray;

@interface NPKIDVRemoteDeviceProtoHeartbeatRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSMutableArray *inProgressResponseIdentifiers;

+ (Class)inProgressResponseIdentifiersType;

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
- (void)addInProgressResponseIdentifiers:(id)a0;
- (unsigned long long)inProgressResponseIdentifiersCount;
- (void)clearInProgressResponseIdentifiers;
- (id)inProgressResponseIdentifiersAtIndex:(unsigned long long)a0;

@end
