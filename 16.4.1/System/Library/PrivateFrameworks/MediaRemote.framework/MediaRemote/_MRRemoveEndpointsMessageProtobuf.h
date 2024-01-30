@class NSMutableArray;

@interface _MRRemoveEndpointsMessageProtobuf : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *endpointUIDs;

+ (Class)endpointUIDsType;

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
- (void)addEndpointUIDs:(id)a0;
- (void)clearEndpointUIDs;
- (id)endpointUIDsAtIndex:(unsigned long long)a0;
- (unsigned long long)endpointUIDsCount;

@end
