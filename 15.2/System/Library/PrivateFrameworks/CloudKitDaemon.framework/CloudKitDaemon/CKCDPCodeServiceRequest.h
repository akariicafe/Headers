@class NSData, NSString, CKCDPCodeServiceRequestRequestContext, CKCDPCodeServiceRequestAssetAuthorizeGetRequestOptions, CKCDPCodeServiceRequestAttestationRequest, CKCDPTrustedTargetCryptoMetadata, NSMutableArray, CKCDPCodeServiceRequestAccountConfig, CKCDPCodeServiceRequestProtectedCloudComputeMetadata;

@interface CKCDPCodeServiceRequest : PBRequest <NSCopying> {
    struct { unsigned char serializationFormat : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasServiceName;
@property (retain, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) BOOL hasFunctionName;
@property (retain, nonatomic) NSString *functionName;
@property (readonly, nonatomic) BOOL hasSerializedParameters;
@property (retain, nonatomic) NSData *serializedParameters;
@property (nonatomic) BOOL hasSerializationFormat;
@property (nonatomic) int serializationFormat;
@property (retain, nonatomic) NSMutableArray *clientConfigs;
@property (readonly, nonatomic) BOOL hasAccountConfig;
@property (retain, nonatomic) CKCDPCodeServiceRequestAccountConfig *accountConfig;
@property (readonly, nonatomic) BOOL hasRequestContext;
@property (retain, nonatomic) CKCDPCodeServiceRequestRequestContext *requestContext;
@property (readonly, nonatomic) BOOL hasAssetAuthorizeGetRequestOptions;
@property (retain, nonatomic) CKCDPCodeServiceRequestAssetAuthorizeGetRequestOptions *assetAuthorizeGetRequestOptions;
@property (readonly, nonatomic) BOOL hasRoutingToken;
@property (retain, nonatomic) NSData *routingToken;
@property (readonly, nonatomic) BOOL hasAttestationRequest;
@property (retain, nonatomic) CKCDPCodeServiceRequestAttestationRequest *attestationRequest;
@property (readonly, nonatomic) BOOL hasProtectedCloudComputeMetadata;
@property (retain, nonatomic) CKCDPCodeServiceRequestProtectedCloudComputeMetadata *protectedCloudComputeMetadata;
@property (readonly, nonatomic) BOOL hasTrustedTargetCryptoMetadata;
@property (retain, nonatomic) CKCDPTrustedTargetCryptoMetadata *trustedTargetCryptoMetadata;

+ (Class)clientConfigType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)clientConfigsCount;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addClientConfig:(id)a0;
- (void)copyTo:(id)a0;
- (id)clientConfigAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)clearClientConfigs;
- (id)dictionaryRepresentation;
- (id)serializationFormatAsString:(int)a0;
- (int)StringAsSerializationFormat:(id)a0;

@end
