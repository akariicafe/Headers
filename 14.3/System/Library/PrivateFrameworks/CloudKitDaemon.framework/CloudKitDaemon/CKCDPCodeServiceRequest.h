@class CKCDPCodeServiceRequestAssetAuthorizeGetRequestOptions, NSString, CKCDPCodeServiceRequestProtectedCloudComputeMetadata, NSData, CKCDPCodeServiceRequestAccountConfig, NSMutableArray, CKCDPCodeServiceRequestRequestContext;

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
@property (readonly, nonatomic) BOOL hasProtectedCloudComputeMetadata;
@property (retain, nonatomic) CKCDPCodeServiceRequestProtectedCloudComputeMetadata *protectedCloudComputeMetadata;
@property (readonly, nonatomic) BOOL hasRoutingToken;
@property (retain, nonatomic) NSData *routingToken;

+ (Class)clientConfigType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addClientConfig:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearClientConfigs;
- (BOOL)readFrom:(id)a0;
- (id)clientConfigAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)clientConfigsCount;
- (id)serializationFormatAsString:(int)a0;
- (int)StringAsSerializationFormat:(id)a0;

@end
