@class NSData;

@interface CKDPCodeFunctionInvokeRequestProtectedCloudComputeMetadataCryptoSession : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasWrappedInvocationKey;
@property (retain, nonatomic) NSData *wrappedInvocationKey;
@property (readonly, nonatomic) BOOL hasRoutingToken;
@property (retain, nonatomic) NSData *routingToken;

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

@end
