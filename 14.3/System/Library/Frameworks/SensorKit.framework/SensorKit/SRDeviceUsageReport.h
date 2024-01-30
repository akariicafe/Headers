@class NSDictionary, NSMutableDictionary, NSString;

@interface SRDeviceUsageReport : NSObject <SRSampleExporting, NSSecureCoding, SRSampling>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSMutableDictionary *mutableApplicationUsageByCategory;
@property (retain) NSMutableDictionary *mutableNotificationUsageByCategory;
@property (retain) NSMutableDictionary *mutableWebUsageByCategory;
@property double startTime;
@property double duration;
@property long long totalScreenWakes;
@property long long totalUnlocks;
@property double totalUnlockDuration;
@property (readonly, copy) NSDictionary *applicationUsageByCategory;
@property (readonly, copy) NSDictionary *notificationUsageByCategory;
@property (readonly, copy) NSDictionary *webUsageByCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)deviceUsageReportWithInterval:(id)a0;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)binarySampleRepresentation;
- (id)initWithBinarySampleRepresentation:(id)a0 metadata:(id)a1 timestamp:(double)a2;
- (void)encodeWithCoder:(id)a0;
- (id)sr_dictionaryRepresentation;

@end
