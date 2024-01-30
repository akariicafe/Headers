@class NSString, NSMutableArray, ATXPBCGRectWrapper;

@interface ATXPBHomeScreenEventMetadata : PBCodable <NSCopying> {
    struct { unsigned char pageIndex : 1; unsigned char suggestedPageType : 1; unsigned char isStalenessRotation : 1; unsigned char isSuggestionInAddWidgetSheet : 1; unsigned char isWidgetInTodayView : 1; } _has;
}

@property (nonatomic) BOOL hasPageIndex;
@property (nonatomic) unsigned long long pageIndex;
@property (retain, nonatomic) NSMutableArray *stackIds;
@property (retain, nonatomic) NSMutableArray *widgetIdentifiables;
@property (retain, nonatomic) NSMutableArray *widgetInStackIdentifiables;
@property (nonatomic) BOOL hasIsSuggestionInAddWidgetSheet;
@property (nonatomic) BOOL isSuggestionInAddWidgetSheet;
@property (nonatomic) BOOL hasIsWidgetInTodayView;
@property (nonatomic) BOOL isWidgetInTodayView;
@property (readonly, nonatomic) BOOL hasVisibleRect;
@property (retain, nonatomic) ATXPBCGRectWrapper *visibleRect;
@property (readonly, nonatomic) BOOL hasEngagedUrl;
@property (retain, nonatomic) NSString *engagedUrl;
@property (nonatomic) BOOL hasIsStalenessRotation;
@property (nonatomic) BOOL isStalenessRotation;
@property (nonatomic) BOOL hasSuggestedPageType;
@property (nonatomic) int suggestedPageType;
@property (retain, nonatomic) NSMutableArray *bundleIds;

+ (Class)bundleIdsType;
+ (Class)stackIdsType;
+ (Class)widgetIdentifiablesType;
+ (Class)widgetInStackIdentifiablesType;

- (void)addBundleIds:(id)a0;
- (void)clearBundleIds;
- (id)stackIdsAtIndex:(unsigned long long)a0;
- (void)clearWidgetInStackIdentifiables;
- (int)StringAsSuggestedPageType:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)stackIdsCount;
- (id)widgetIdentifiablesAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (id)bundleIdsAtIndex:(unsigned long long)a0;
- (id)widgetInStackIdentifiablesAtIndex:(unsigned long long)a0;
- (unsigned long long)widgetIdentifiablesCount;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)clearWidgetIdentifiables;
- (unsigned long long)hash;
- (unsigned long long)bundleIdsCount;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)widgetInStackIdentifiablesCount;
- (id)description;
- (void)addWidgetIdentifiables:(id)a0;
- (id)suggestedPageTypeAsString:(int)a0;
- (void).cxx_destruct;
- (void)addStackIds:(id)a0;
- (void)clearStackIds;
- (void)addWidgetInStackIdentifiables:(id)a0;

@end
