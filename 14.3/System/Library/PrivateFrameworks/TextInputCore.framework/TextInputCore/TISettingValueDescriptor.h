@class NSString;

@interface TISettingValueDescriptor : TIMetricDescriptor

@property (retain) NSString *settingName;

+ (id)settingValueDescriptorWithMetricName:(id)a0 settingName:(id)a1;

- (void).cxx_destruct;
- (id)initWithMetricName:(id)a0 settingName:(id)a1;

@end
