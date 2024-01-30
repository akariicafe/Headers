@class NSString, CPSClipMetadata;

@interface ATXHeroAppPrediction : NSObject <ATXProtoBufWrapper, ATXSuggestionExecutableProtocol, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long adamId;
@property (retain, nonatomic) NSString *bundleId;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) double latitudeAtPredictionTime;
@property (nonatomic) double longitudeAtPredictionTime;
@property (nonatomic) unsigned long long radiusInMeters;
@property (nonatomic) unsigned long long rank;
@property (nonatomic) BOOL isTouristApp;
@property (nonatomic) double score;
@property (retain, nonatomic) NSString *urlHash;
@property (retain, nonatomic) CPSClipMetadata *clipMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isClipMetadataEqual:(id)a0 other:(id)a1;
+ (id)copyClipMetadata:(id)a0;

- (BOOL)checkAndReportDecodingFailureIfNeededForBOOL:(BOOL)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)init;
- (id)initWithPredictedAdamId:(unsigned long long)a0 latitude:(double)a1 longitude:(double)a2 radiusInMeters:(unsigned long long)a3 rank:(unsigned long long)a4 isTouristApp:(BOOL)a5;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithProtoData:(id)a0;
- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (BOOL)checkAndReportDecodingFailureIfNeededFordouble:(double)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)initWithCoder:(id)a0;
- (id)initWithProto:(id)a0;
- (id)proto;
- (id)initWithPredictedAdamId:(unsigned long long)a0 bundleId:(id)a1 latitude:(double)a2 longitude:(double)a3 radiusInMeters:(unsigned long long)a4 rank:(unsigned long long)a5 isTouristApp:(BOOL)a6 score:(double)a7 urlHash:(id)a8 clipMetadata:(id)a9;
- (id)encodeAsProto;
- (BOOL)isEqual:(id)a0;
- (id)initWithPredictedBundleId:(id)a0 latitude:(double)a1 longitude:(double)a2 radiusInMeters:(unsigned long long)a3 rank:(unsigned long long)a4 isTouristApp:(BOOL)a5;
- (void)encodeWithCoder:(id)a0;

@end
