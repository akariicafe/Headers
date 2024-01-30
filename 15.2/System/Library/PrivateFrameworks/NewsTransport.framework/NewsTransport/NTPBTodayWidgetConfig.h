@class NSData, NSString;

@interface NTPBTodayWidgetConfig : PBCodable <NSCopying> {
    struct { unsigned char minimumArticleExposureDurationToBePreseen : 1; unsigned char prerollLoadingTimeout : 1; unsigned char widgetSystemReloadInterval : 1; unsigned char widgetSystemReloadJitterMax : 1; unsigned char minimumNumberOfTimesPreseenToBeSeen : 1; unsigned char contentPrefetchEnabled : 1; } _has;
}

@property (nonatomic) BOOL hasMinimumArticleExposureDurationToBePreseen;
@property (nonatomic) long long minimumArticleExposureDurationToBePreseen;
@property (nonatomic) BOOL hasMinimumNumberOfTimesPreseenToBeSeen;
@property (nonatomic) unsigned int minimumNumberOfTimesPreseenToBeSeen;
@property (nonatomic) BOOL hasPrerollLoadingTimeout;
@property (nonatomic) double prerollLoadingTimeout;
@property (readonly, nonatomic) BOOL hasExternalAnalyticsConfigurationsData;
@property (retain, nonatomic) NSData *externalAnalyticsConfigurationsData;
@property (readonly, nonatomic) BOOL hasBackgroundColorLight;
@property (retain, nonatomic) NSString *backgroundColorLight;
@property (readonly, nonatomic) BOOL hasBackgroundColorDark;
@property (retain, nonatomic) NSString *backgroundColorDark;
@property (nonatomic) BOOL hasContentPrefetchEnabled;
@property (nonatomic) BOOL contentPrefetchEnabled;
@property (readonly, nonatomic) BOOL hasAudioIndicatorColor;
@property (retain, nonatomic) NSString *audioIndicatorColor;
@property (nonatomic) BOOL hasWidgetSystemReloadInterval;
@property (nonatomic) long long widgetSystemReloadInterval;
@property (nonatomic) BOOL hasWidgetSystemReloadJitterMax;
@property (nonatomic) long long widgetSystemReloadJitterMax;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
