@class NSString;

@interface NTPBEndpointConfig : PBCodable <NSCopying>

@property (nonatomic) int environment;
@property (readonly, nonatomic) BOOL hasClientApiBaseUrl;
@property (retain, nonatomic) NSString *clientApiBaseUrl;
@property (readonly, nonatomic) BOOL hasEventRelayBaseUrl;
@property (retain, nonatomic) NSString *eventRelayBaseUrl;
@property (readonly, nonatomic) BOOL hasEventRelayBatchBaseUrl;
@property (retain, nonatomic) NSString *eventRelayBatchBaseUrl;
@property (readonly, nonatomic) BOOL hasNewsNotificationsBaseUrl;
@property (retain, nonatomic) NSString *newsNotificationsBaseUrl;
@property (readonly, nonatomic) BOOL hasAnalyticsEndpointUrlsJson;
@property (retain, nonatomic) NSString *analyticsEndpointUrlsJson;
@property (readonly, nonatomic) BOOL hasAnalyticsEnvelopeContentTypePropJson;
@property (retain, nonatomic) NSString *analyticsEnvelopeContentTypePropJson;
@property (readonly, nonatomic) BOOL hasStaticAssetBaseUrl;
@property (retain, nonatomic) NSString *staticAssetBaseUrl;
@property (readonly, nonatomic) BOOL hasRemoteDataSourceBaseUrl;
@property (retain, nonatomic) NSString *remoteDataSourceBaseUrl;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
