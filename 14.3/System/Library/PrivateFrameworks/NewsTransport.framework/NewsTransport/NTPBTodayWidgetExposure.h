@class NSString, NSMutableArray;

@interface NTPBTodayWidgetExposure : PBCodable <NSCopying> {
    struct { unsigned char contentFetchDate : 1; unsigned char widgetAppearanceType : 1; unsigned char widgetArticleCount : 1; unsigned char widgetExposureStackLocation : 1; unsigned char widgetHeadlineExposureCount : 1; unsigned char widgetType : 1; } _has;
}

@property (nonatomic) BOOL hasWidgetArticleCount;
@property (nonatomic) int widgetArticleCount;
@property (nonatomic) BOOL hasWidgetHeadlineExposureCount;
@property (nonatomic) int widgetHeadlineExposureCount;
@property (retain, nonatomic) NSMutableArray *widgetSectionsArticleCountPairs;
@property (retain, nonatomic) NSMutableArray *widgetPersonalizationFeatureCTRPairs;
@property (nonatomic) BOOL hasWidgetAppearanceType;
@property (nonatomic) int widgetAppearanceType;
@property (readonly, nonatomic) BOOL hasWidgetIdentifier;
@property (retain, nonatomic) NSString *widgetIdentifier;
@property (nonatomic) BOOL hasContentFetchDate;
@property (nonatomic) long long contentFetchDate;
@property (readonly, nonatomic) BOOL hasContentId;
@property (retain, nonatomic) NSString *contentId;
@property (nonatomic) BOOL hasWidgetExposureStackLocation;
@property (nonatomic) int widgetExposureStackLocation;
@property (nonatomic) BOOL hasWidgetType;
@property (nonatomic) int widgetType;

+ (Class)widgetSectionsArticleCountPairType;
+ (Class)widgetPersonalizationFeatureCTRPairType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)addWidgetSectionsArticleCountPair:(id)a0;
- (void)addWidgetPersonalizationFeatureCTRPair:(id)a0;
- (void)clearWidgetSectionsArticleCountPairs;
- (unsigned long long)widgetSectionsArticleCountPairsCount;
- (id)widgetSectionsArticleCountPairAtIndex:(unsigned long long)a0;
- (void)clearWidgetPersonalizationFeatureCTRPairs;
- (unsigned long long)widgetPersonalizationFeatureCTRPairsCount;
- (id)widgetPersonalizationFeatureCTRPairAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)widgetExposureStackLocationAsString:(int)a0;
- (int)StringAsWidgetExposureStackLocation:(id)a0;
- (id)widgetTypeAsString:(int)a0;
- (int)StringAsWidgetType:(id)a0;

@end
