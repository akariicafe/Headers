@class NSNumber;

@interface HDAudioAnalyticsHeadphoneSettingsDeviceResult : NSObject

@property (readonly, nonatomic) NSNumber *hasHAENRequired;
@property (readonly, nonatomic) NSNumber *hasHAENEnabled;
@property (readonly, nonatomic) NSNumber *hasMeasureLevelsEnabled;
@property (readonly, nonatomic) NSNumber *hasIncludeOtherHeadphonesEnabled;
@property (readonly, nonatomic) NSNumber *haeRetention;

+ (id)optInSettingsWithHasHAENEnabled:(BOOL)a0 hasMeasureLevelsEnabled:(BOOL)a1 hasIncludeOtherHeadphonesEnabled:(BOOL)a2;
+ (id)requiredSettingsWithSaveForEightDays:(BOOL)a0;

- (void).cxx_destruct;
- (id)initWithHAENRequired:(BOOL)a0 hasHAENEnabled:(id)a1 hasMeasureLevelsEnabled:(id)a2 hasIncludeOtherHeadphonesEnabled:(id)a3 haeRetention:(id)a4;

@end
