@interface MPRTCReportingEvent : NSObject

@property (readonly, nonatomic) unsigned short rtcReportingCategory;
@property (readonly, nonatomic) unsigned short rtcReportingType;
@property (nonatomic) long long networkInterfaceType;

- (id)newRTCReportingMessageDictionary;
- (id)newRTCReportingPayloadDictionary;

@end
