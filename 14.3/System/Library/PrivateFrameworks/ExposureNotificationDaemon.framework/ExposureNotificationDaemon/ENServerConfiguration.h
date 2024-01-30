@class NSString;

@interface ENServerConfiguration : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _fetchAllRanges;
    struct { int *list; unsigned long long count; unsigned long long size; } _fetchIncrementalRanges;
    struct { unsigned char advertisingIntervalInMilliSec : 1; unsigned char proximityDurationMinAPWakeThresholdInSec : 1; unsigned char proximityDurationMinForceAPWakeThresholdInSec : 1; unsigned char proximityDurationScanDurationAudioInSec : 1; unsigned char proximityDurationScanDurationInSec : 1; unsigned char proximityDurationScanIntervalAudioInMilliSec : 1; unsigned char applicationBackgroundRuntimeIntervalinHours : 1; unsigned char attenuationMinThreshold : 1; unsigned char attenuationThresholdForExposureInfo : 1; unsigned char proximityDurationMaxThresholdInSec : 1; unsigned char proximityDurationMinThresholdInSec : 1; unsigned char rollingIdentifierIntervalInMin : 1; unsigned char rollingIdentifiersCacheExpiryAgeInSec : 1; } _has;
}

@property (nonatomic) BOOL enEnabled;
@property (retain, nonatomic) NSString *serverConfigVersion;
@property (nonatomic) BOOL hasRollingIdentifierIntervalInMin;
@property (nonatomic) int rollingIdentifierIntervalInMin;
@property (nonatomic) BOOL hasAttenuationMinThreshold;
@property (nonatomic) int attenuationMinThreshold;
@property (nonatomic) BOOL hasProximityDurationMinThresholdInSec;
@property (nonatomic) int proximityDurationMinThresholdInSec;
@property (nonatomic) BOOL hasRollingIdentifiersCacheExpiryAgeInSec;
@property (nonatomic) int rollingIdentifiersCacheExpiryAgeInSec;
@property (nonatomic) BOOL hasProximityDurationMinForceAPWakeThresholdInSec;
@property (nonatomic) long long proximityDurationMinForceAPWakeThresholdInSec;
@property (nonatomic) BOOL hasProximityDurationMinAPWakeThresholdInSec;
@property (nonatomic) long long proximityDurationMinAPWakeThresholdInSec;
@property (nonatomic) BOOL hasProximityDurationScanDurationInSec;
@property (nonatomic) long long proximityDurationScanDurationInSec;
@property (nonatomic) BOOL hasProximityDurationScanDurationAudioInSec;
@property (nonatomic) long long proximityDurationScanDurationAudioInSec;
@property (nonatomic) BOOL hasProximityDurationScanIntervalAudioInMilliSec;
@property (nonatomic) long long proximityDurationScanIntervalAudioInMilliSec;
@property (nonatomic) BOOL hasAdvertisingIntervalInMilliSec;
@property (nonatomic) long long advertisingIntervalInMilliSec;
@property (nonatomic) int maximumPastDaysKeysToFetchOrPublish;
@property (nonatomic) int maximumFutureDayKeysToPublish;
@property (readonly, nonatomic) unsigned long long fetchAllRangesCount;
@property (readonly, nonatomic) int *fetchAllRanges;
@property (readonly, nonatomic) unsigned long long fetchIncrementalRangesCount;
@property (readonly, nonatomic) int *fetchIncrementalRanges;
@property (nonatomic) long long callbackIntervalInMin;
@property (nonatomic) BOOL hasProximityDurationMaxThresholdInSec;
@property (nonatomic) int proximityDurationMaxThresholdInSec;
@property (nonatomic) BOOL hasApplicationBackgroundRuntimeIntervalinHours;
@property (nonatomic) int applicationBackgroundRuntimeIntervalinHours;
@property (readonly, nonatomic) BOOL hasRegionIdentifier;
@property (retain, nonatomic) NSString *regionIdentifier;
@property (nonatomic) BOOL hasAttenuationThresholdForExposureInfo;
@property (nonatomic) int attenuationThresholdForExposureInfo;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearFetchAllRanges;
- (int)fetchAllRangeAtIndex:(unsigned long long)a0;
- (void)addFetchAllRange:(int)a0;
- (void)clearFetchIncrementalRanges;
- (int)fetchIncrementalRangeAtIndex:(unsigned long long)a0;
- (void)addFetchIncrementalRange:(int)a0;
- (void)setFetchAllRanges:(int *)a0 count:(unsigned long long)a1;
- (void)setFetchIncrementalRanges:(int *)a0 count:(unsigned long long)a1;

@end
