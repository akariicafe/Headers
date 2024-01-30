@class NSString, MKFeaturePayload;

@interface MKPayload : NSObject

@property (copy, nonatomic) NSString *androidAPILevel;
@property (copy, nonatomic) NSString *androidBrand;
@property (copy, nonatomic) NSString *androidLocale;
@property (copy, nonatomic) NSString *androidModel;
@property (copy, nonatomic) NSString *androidOSVersion;
@property (copy, nonatomic) NSString *androidVersion;
@property (copy, nonatomic) NSString *androidVersionCode;
@property (nonatomic) unsigned long long data;
@property (nonatomic) unsigned long long dataSize;
@property (nonatomic) unsigned long long elapsedTime;
@property (copy, nonatomic) NSString *state;
@property (retain, nonatomic) MKFeaturePayload *messages;
@property (retain, nonatomic) MKFeaturePayload *photos;
@property (retain, nonatomic) MKFeaturePayload *videos;
@property (retain, nonatomic) MKFeaturePayload *contacts;
@property (retain, nonatomic) MKFeaturePayload *calendars;
@property (retain, nonatomic) MKFeaturePayload *bookmarks;
@property (retain, nonatomic) MKFeaturePayload *accounts;
@property (retain, nonatomic) MKFeaturePayload *files;
@property (retain, nonatomic) MKFeaturePayload *accessibilitySettings;
@property (retain, nonatomic) MKFeaturePayload *displaySettings;

- (void).cxx_destruct;
- (id)init;
- (id)dictionary;

@end
