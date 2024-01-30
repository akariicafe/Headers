@class NSError, NSString;

@interface MPRTCReportingAssetLoadEvent : MPRTCReportingEvent

@property (nonatomic) double duration;
@property (copy, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *siriSessionIdentifier;

- (void).cxx_destruct;
- (unsigned short)rtcReportingCategory;
- (unsigned short)rtcReportingType;
- (id)newRTCReportingPayloadDictionary;

@end
