@class NSData, CKCDPError, NSMutableArray;

@interface CKCDPCodeServiceResponse : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasSerializedResult;
@property (retain, nonatomic) NSData *serializedResult;
@property (readonly, nonatomic) BOOL hasError;
@property (retain, nonatomic) CKCDPError *error;
@property (retain, nonatomic) NSMutableArray *assetAuthorizationResponses;
@property (readonly, nonatomic) BOOL hasRoutingToken;
@property (retain, nonatomic) NSData *routingToken;

+ (Class)assetAuthorizationResponsesType;

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
- (void)addAssetAuthorizationResponses:(id)a0;
- (unsigned long long)assetAuthorizationResponsesCount;
- (void)clearAssetAuthorizationResponses;
- (id)assetAuthorizationResponsesAtIndex:(unsigned long long)a0;

@end
