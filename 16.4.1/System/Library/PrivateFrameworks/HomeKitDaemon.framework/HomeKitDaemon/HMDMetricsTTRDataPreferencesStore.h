@class NSString, NSDate;

@interface HMDMetricsTTRDataPreferencesStore : NSObject <HMDMetricsTTRDataStoring>

@property (retain, nonatomic) NSDate *lastRadarDialogTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
