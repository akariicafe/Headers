@class NSString, WLFeaturePayload;

@interface WLPayload : NSObject

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
@property (retain, nonatomic) WLFeaturePayload *messages;
@property (retain, nonatomic) WLFeaturePayload *photos;
@property (retain, nonatomic) WLFeaturePayload *videos;
@property (retain, nonatomic) WLFeaturePayload *contacts;
@property (retain, nonatomic) WLFeaturePayload *calendars;
@property (retain, nonatomic) WLFeaturePayload *bookmarks;
@property (retain, nonatomic) WLFeaturePayload *accounts;
@property (retain, nonatomic) WLFeaturePayload *files;
@property (retain, nonatomic) WLFeaturePayload *accessibilitySettings;
@property (retain, nonatomic) WLFeaturePayload *displaySettings;

- (void).cxx_destruct;
- (id)init;
- (id)dictionary;

@end
