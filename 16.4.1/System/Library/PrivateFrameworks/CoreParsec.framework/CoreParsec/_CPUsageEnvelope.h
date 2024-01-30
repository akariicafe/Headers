@class NSData, _CPSpotlightUsagePropensity, _CPImagesUsagePropensity, _CPSafariUsagePropensity, NSString, _CPUsageSinceLookback, _CPDeviceContext, _CPNewsUsagePropensity;

@interface _CPUsageEnvelope : PBCodable <_CPUsageEnvelope, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _CPUsageSinceLookback *usageSinceLookback;
@property (retain, nonatomic) _CPSafariUsagePropensity *safariUsagePropensity;
@property (retain, nonatomic) _CPSpotlightUsagePropensity *spotlightUsagePropensity;
@property (retain, nonatomic) _CPImagesUsagePropensity *imagesUsagePropensity;
@property (retain, nonatomic) _CPNewsUsagePropensity *newsUsagePropensity;
@property (nonatomic) long long collectionStartTimestamp;
@property (nonatomic) long long collectionEndTimestamp;
@property (nonatomic) int configuredLookbackTimeInDays;
@property (nonatomic) int totalSessions;
@property (retain, nonatomic) _CPDeviceContext *context;
@property (copy, nonatomic) NSData *uuidBytes;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichKind;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (void)clearKind;

@end
