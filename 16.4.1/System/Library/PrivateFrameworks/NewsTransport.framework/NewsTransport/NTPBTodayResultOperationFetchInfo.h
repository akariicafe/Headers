@class NSString, NTPBTodayWidgetConfig, NSData;

@interface NTPBTodayResultOperationFetchInfo : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _userSegmentationSegmentSetIds;
    struct { long long *list; unsigned long long count; unsigned long long size; } _userSegmentationTreatmentIds;
    struct { unsigned char appConfigTreatmentIDInteger : 1; unsigned char cellularRadioAccessTechnology : 1; unsigned char onboardingVersion : 1; unsigned char reachabilityStatus : 1; unsigned char isBundleSubscriber : 1; unsigned char wifiReachable : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasTodaySourceIdentifier;
@property (retain, nonatomic) NSString *todaySourceIdentifier;
@property (nonatomic) BOOL hasAppConfigTreatmentIDInteger;
@property (nonatomic) long long appConfigTreatmentIDInteger;
@property (readonly, nonatomic) BOOL hasUserID;
@property (retain, nonatomic) NSString *userID;
@property (readonly, nonatomic) BOOL hasContentStoreFrontID;
@property (retain, nonatomic) NSString *contentStoreFrontID;
@property (nonatomic) BOOL hasWifiReachable;
@property (nonatomic) BOOL wifiReachable;
@property (nonatomic) BOOL hasCellularRadioAccessTechnology;
@property (nonatomic) long long cellularRadioAccessTechnology;
@property (nonatomic) BOOL hasReachabilityStatus;
@property (nonatomic) long long reachabilityStatus;
@property (readonly, nonatomic) BOOL hasWidgetConfig;
@property (retain, nonatomic) NTPBTodayWidgetConfig *widgetConfig;
@property (nonatomic) BOOL hasOnboardingVersion;
@property (nonatomic) long long onboardingVersion;
@property (readonly, nonatomic) BOOL hasClickThroughRateByPersonalizationFeatureIDData;
@property (retain, nonatomic) NSData *clickThroughRateByPersonalizationFeatureIDData;
@property (readonly, nonatomic) BOOL hasLocaleIdentifier;
@property (retain, nonatomic) NSString *localeIdentifier;
@property (readonly, nonatomic) unsigned long long userSegmentationSegmentSetIdsCount;
@property (readonly, nonatomic) int *userSegmentationSegmentSetIds;
@property (readonly, nonatomic) unsigned long long userSegmentationTreatmentIdsCount;
@property (readonly, nonatomic) long long *userSegmentationTreatmentIds;
@property (nonatomic) BOOL hasIsBundleSubscriber;
@property (nonatomic) BOOL isBundleSubscriber;
@property (readonly, nonatomic) BOOL hasBundleIap;
@property (retain, nonatomic) NSString *bundleIap;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)dealloc;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)addUserSegmentationSegmentSetIds:(int)a0;
- (void)addUserSegmentationTreatmentIds:(long long)a0;
- (void)clearUserSegmentationSegmentSetIds;
- (void)clearUserSegmentationTreatmentIds;
- (void)setUserSegmentationSegmentSetIds:(int *)a0 count:(unsigned long long)a1;
- (void)setUserSegmentationTreatmentIds:(long long *)a0 count:(unsigned long long)a1;
- (int)userSegmentationSegmentSetIdsAtIndex:(unsigned long long)a0;
- (long long)userSegmentationTreatmentIdsAtIndex:(unsigned long long)a0;

@end
