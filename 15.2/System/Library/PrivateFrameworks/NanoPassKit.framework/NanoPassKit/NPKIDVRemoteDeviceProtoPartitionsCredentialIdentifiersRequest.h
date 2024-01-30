@class NSMutableArray;

@interface NPKIDVRemoteDeviceProtoPartitionsCredentialIdentifiersRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSMutableArray *partitionsIdentifiers;

+ (Class)partitionsIdentifiersType;

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
- (void)addPartitionsIdentifiers:(id)a0;
- (unsigned long long)partitionsIdentifiersCount;
- (void)clearPartitionsIdentifiers;
- (id)partitionsIdentifiersAtIndex:(unsigned long long)a0;

@end
