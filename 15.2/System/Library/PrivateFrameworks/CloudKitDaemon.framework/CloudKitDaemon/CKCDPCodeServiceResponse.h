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

- (id)assetAuthorizationResponsesAtIndex:(unsigned long long)a0;
- (void)clearAssetAuthorizationResponses;
- (void)addAssetAuthorizationResponses:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)assetAuthorizationResponsesCount;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
