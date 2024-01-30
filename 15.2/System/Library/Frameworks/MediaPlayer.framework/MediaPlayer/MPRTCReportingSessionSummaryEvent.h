@class NSError, NSNumber, NSString;

@interface MPRTCReportingSessionSummaryEvent : MPRTCReportingEvent

@property (copy, nonatomic) NSError *assetLoadError;
@property (nonatomic) double assetLoadDuration;
@property (nonatomic) long long blockingSecureKeyLoadCount;
@property (nonatomic) double blockingSecureKeyLoadDuration;
@property (nonatomic) double maximumSecureKeyLoadDuration;
@property (nonatomic) long long secureKeyLoadCount;
@property (copy, nonatomic) NSError *secureKeyError;
@property (copy, nonatomic) NSError *tracklistLoadError;
@property (nonatomic) double tracklistLoadDuration;
@property (nonatomic) BOOL hadBlockingTracklistLoad;
@property (copy, nonatomic) NSError *playbackEndError;
@property (nonatomic) long long endReasonType;
@property (nonatomic) long long startupState;
@property (nonatomic) long long interfaceTypeChangeCount;
@property (nonatomic) long long startInterfaceType;
@property (copy, nonatomic) NSNumber *perceivedTotalStartupTime;
@property (copy, nonatomic) NSString *siriSessionIdentifier;

- (void).cxx_destruct;
- (unsigned short)rtcReportingCategory;
- (id)newRTCReportingPayloadDictionary;

@end
