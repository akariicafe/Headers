@class NSData, NSString;

@interface HMDAnalyticsMultiUserSettingsValueByKeyPath : HMFObject

@property long long multiUserSettingsValueInteger;
@property (copy, nonatomic) NSData *multiUserSettingsValueData;
@property (copy, nonatomic) NSString *multiUserSettingsValueString;
@property int type;

- (void).cxx_destruct;

@end
