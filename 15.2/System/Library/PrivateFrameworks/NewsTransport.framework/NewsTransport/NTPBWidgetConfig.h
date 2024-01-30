@class NSString;

@interface NTPBWidgetConfig : PBCodable <NSCopying> {
    struct { unsigned char alternativeButlerWidgetConfigPopulationCeiling : 1; unsigned char alternativeButlerWidgetConfigPopulationFloor : 1; unsigned char articleListBackgroundMinimumUpdateInterval : 1; unsigned char articleListForegroundMinimumUpdateInterval : 1; unsigned char backgroundMinimumUpdateInterval : 1; unsigned char forYouBackgroundMinimumUpdateInterval : 1; unsigned char forYouCutoffTime : 1; unsigned char forYouForegroundMinimumUpdateInterval : 1; unsigned char foregroundMinimumUpdateInterval : 1; unsigned char minimumArticleExposureDurationToBePreseen : 1; unsigned char parsecPopulationCeiling : 1; unsigned char parsecPopulationFloor : 1; unsigned char parsecTrendingCutoffTime : 1; unsigned char topStoriesBackgroundMinimumUpdateInterval : 1; unsigned char topStoriesCutoffTime : 1; unsigned char topStoriesForegroundMinimumUpdateInterval : 1; unsigned char trendingBackgroundMinimumUpdateInterval : 1; unsigned char trendingByParsecBackgroundMinimumUpdateInterval : 1; unsigned char trendingByParsecForegroundMinimumUpdateInterval : 1; unsigned char trendingCutoffTime : 1; unsigned char trendingForegroundMinimumUpdateInterval : 1; unsigned char widgetSectionConfigBackgroundMinimumUpdateInterval : 1; unsigned char widgetSectionConfigForegroundMinimumUpdateInterval : 1; unsigned char enabledSections : 1; unsigned char minimumNumberOfTimesPreseenToBeSeen : 1; } _has;
}

@property (nonatomic) BOOL hasTopStoriesCutoffTime;
@property (nonatomic) long long topStoriesCutoffTime;
@property (nonatomic) BOOL hasForYouCutoffTime;
@property (nonatomic) long long forYouCutoffTime;
@property (nonatomic) BOOL hasTrendingCutoffTime;
@property (nonatomic) long long trendingCutoffTime;
@property (nonatomic) BOOL hasEnabledSections;
@property (nonatomic) unsigned int enabledSections;
@property (nonatomic) BOOL hasParsecPopulationFloor;
@property (nonatomic) double parsecPopulationFloor;
@property (nonatomic) BOOL hasParsecPopulationCeiling;
@property (nonatomic) double parsecPopulationCeiling;
@property (nonatomic) BOOL hasForegroundMinimumUpdateInterval;
@property (nonatomic) long long foregroundMinimumUpdateInterval;
@property (nonatomic) BOOL hasBackgroundMinimumUpdateInterval;
@property (nonatomic) long long backgroundMinimumUpdateInterval;
@property (nonatomic) BOOL hasTopStoriesForegroundMinimumUpdateInterval;
@property (nonatomic) long long topStoriesForegroundMinimumUpdateInterval;
@property (nonatomic) BOOL hasTopStoriesBackgroundMinimumUpdateInterval;
@property (nonatomic) long long topStoriesBackgroundMinimumUpdateInterval;
@property (nonatomic) BOOL hasForYouForegroundMinimumUpdateInterval;
@property (nonatomic) long long forYouForegroundMinimumUpdateInterval;
@property (nonatomic) BOOL hasForYouBackgroundMinimumUpdateInterval;
@property (nonatomic) long long forYouBackgroundMinimumUpdateInterval;
@property (nonatomic) BOOL hasTrendingForegroundMinimumUpdateInterval;
@property (nonatomic) long long trendingForegroundMinimumUpdateInterval;
@property (nonatomic) BOOL hasTrendingBackgroundMinimumUpdateInterval;
@property (nonatomic) long long trendingBackgroundMinimumUpdateInterval;
@property (nonatomic) BOOL hasAlternativeButlerWidgetConfigPopulationFloor;
@property (nonatomic) double alternativeButlerWidgetConfigPopulationFloor;
@property (nonatomic) BOOL hasAlternativeButlerWidgetConfigPopulationCeiling;
@property (nonatomic) double alternativeButlerWidgetConfigPopulationCeiling;
@property (nonatomic) BOOL hasParsecTrendingCutoffTime;
@property (nonatomic) long long parsecTrendingCutoffTime;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL hasArticleListForegroundMinimumUpdateInterval;
@property (nonatomic) long long articleListForegroundMinimumUpdateInterval;
@property (nonatomic) BOOL hasArticleListBackgroundMinimumUpdateInterval;
@property (nonatomic) long long articleListBackgroundMinimumUpdateInterval;
@property (nonatomic) BOOL hasTrendingByParsecForegroundMinimumUpdateInterval;
@property (nonatomic) long long trendingByParsecForegroundMinimumUpdateInterval;
@property (nonatomic) BOOL hasTrendingByParsecBackgroundMinimumUpdateInterval;
@property (nonatomic) long long trendingByParsecBackgroundMinimumUpdateInterval;
@property (nonatomic) BOOL hasWidgetSectionConfigForegroundMinimumUpdateInterval;
@property (nonatomic) long long widgetSectionConfigForegroundMinimumUpdateInterval;
@property (nonatomic) BOOL hasWidgetSectionConfigBackgroundMinimumUpdateInterval;
@property (nonatomic) long long widgetSectionConfigBackgroundMinimumUpdateInterval;
@property (nonatomic) BOOL hasMinimumArticleExposureDurationToBePreseen;
@property (nonatomic) long long minimumArticleExposureDurationToBePreseen;
@property (nonatomic) BOOL hasMinimumNumberOfTimesPreseenToBeSeen;
@property (nonatomic) unsigned int minimumNumberOfTimesPreseenToBeSeen;

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
