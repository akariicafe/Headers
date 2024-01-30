@class NSString, NTPBTodayModuleContentRequest, NTPBSectionSlotCostInfo;

@interface NTPBTodayResultOperationInfo : PBCodable <NSCopying> {
    struct { unsigned char embedsLimit : 1; unsigned char leadingCellThumbnailSizePreset : 1; unsigned char maxHeadlineScale : 1; unsigned char minHeadlineScale : 1; unsigned char qualityOfService : 1; unsigned char scale : 1; unsigned char slotsLimit : 1; unsigned char sourceNameImageSizePreset : 1; unsigned char thumbnailSizePreset : 1; unsigned char dynamicThumbnailSizePresetMinimumHeightInPixels : 1; unsigned char dynamicThumbnailSizePresetMinimumWidthInPixels : 1; unsigned char widgetSize : 1; unsigned char allowOnlyWatchEligibleSections : 1; unsigned char allowSectionTitles : 1; unsigned char fetchWidgetConfig : 1; unsigned char preferCompactSectionName : 1; unsigned char preferCompactSourceName : 1; unsigned char respectsWidgetSlotsLimit : 1; unsigned char respectsWidgetVisibleSectionsPerQueueLimit : 1; } _has;
}

@property (nonatomic) BOOL hasSlotsLimit;
@property (nonatomic) double slotsLimit;
@property (nonatomic) BOOL hasRespectsWidgetSlotsLimit;
@property (nonatomic) BOOL respectsWidgetSlotsLimit;
@property (nonatomic) BOOL hasPreferCompactSectionName;
@property (nonatomic) BOOL preferCompactSectionName;
@property (nonatomic) BOOL hasPreferCompactSourceName;
@property (nonatomic) BOOL preferCompactSourceName;
@property (nonatomic) BOOL hasThumbnailSizePreset;
@property (nonatomic) long long thumbnailSizePreset;
@property (nonatomic) BOOL hasSourceNameImageSizePreset;
@property (nonatomic) long long sourceNameImageSizePreset;
@property (nonatomic) BOOL hasQualityOfService;
@property (nonatomic) long long qualityOfService;
@property (readonly, nonatomic) BOOL hasSectionSlotCostInfo;
@property (retain, nonatomic) NTPBSectionSlotCostInfo *sectionSlotCostInfo;
@property (nonatomic) BOOL hasFetchWidgetConfig;
@property (nonatomic) BOOL fetchWidgetConfig;
@property (nonatomic) BOOL hasAllowOnlyWatchEligibleSections;
@property (nonatomic) BOOL allowOnlyWatchEligibleSections;
@property (nonatomic) BOOL hasRespectsWidgetVisibleSectionsPerQueueLimit;
@property (nonatomic) BOOL respectsWidgetVisibleSectionsPerQueueLimit;
@property (readonly, nonatomic) BOOL hasAssetsDirectoryFileURLString;
@property (retain, nonatomic) NSString *assetsDirectoryFileURLString;
@property (nonatomic) BOOL hasLeadingCellThumbnailSizePreset;
@property (nonatomic) long long leadingCellThumbnailSizePreset;
@property (nonatomic) BOOL hasDynamicThumbnailSizePresetMinimumWidthInPixels;
@property (nonatomic) unsigned int dynamicThumbnailSizePresetMinimumWidthInPixels;
@property (nonatomic) BOOL hasDynamicThumbnailSizePresetMinimumHeightInPixels;
@property (nonatomic) unsigned int dynamicThumbnailSizePresetMinimumHeightInPixels;
@property (nonatomic) BOOL hasAllowSectionTitles;
@property (nonatomic) BOOL allowSectionTitles;
@property (nonatomic) BOOL hasEmbedsLimit;
@property (nonatomic) long long embedsLimit;
@property (nonatomic) BOOL hasScale;
@property (nonatomic) double scale;
@property (readonly, nonatomic) BOOL hasKeyboardInputMode;
@property (retain, nonatomic) NSString *keyboardInputMode;
@property (readonly, nonatomic) BOOL hasRequest;
@property (retain, nonatomic) NTPBTodayModuleContentRequest *request;
@property (nonatomic) BOOL hasMinHeadlineScale;
@property (nonatomic) double minHeadlineScale;
@property (nonatomic) BOOL hasMaxHeadlineScale;
@property (nonatomic) double maxHeadlineScale;
@property (nonatomic) BOOL hasWidgetSize;
@property (nonatomic) int widgetSize;

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
