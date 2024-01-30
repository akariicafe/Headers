@class NSDictionary, NTPBWidgetConfig;

@interface FCWidgetConfig : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NTPBWidgetConfig *pbWidgetConfig;
@property (copy, nonatomic) NSDictionary *configDictionary;
@property (readonly, nonatomic) double parsecPopulationFloor;
@property (readonly, nonatomic) double parsecPopulationCeiling;
@property (readonly, nonatomic) long long foregroundMinimumUpdateInterval;
@property (readonly, nonatomic) long long backgroundMinimumUpdateInterval;
@property (readonly, nonatomic) long long articleListForegroundMinimumUpdateInterval;
@property (readonly, nonatomic) long long articleListBackgroundMinimumUpdateInterval;
@property (readonly, nonatomic) long long forYouForegroundMinimumUpdateInterval;
@property (readonly, nonatomic) long long forYouBackgroundMinimumUpdateInterval;
@property (readonly, nonatomic) long long minimumArticleExposureDurationToBePreseen;
@property (readonly, nonatomic) unsigned int minimumNumberOfTimesPreseenToBeSeen;
@property (readonly, nonatomic) long long widgetSystemReloadInterval;
@property (readonly, nonatomic) long long widgetSystemReloadJitterMax;
@property (readonly, nonatomic) long long widgetSystemHoneymoonDuration;
@property (readonly, nonatomic) long long widgetSystemReloadIntervalHoneymoon;
@property (readonly, nonatomic) long long widgetSystemReloadJitterMaxHoneymoon;

- (id)initWithConfigDictionary:(id)a0;
- (id)initWithWidgetConfig:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
