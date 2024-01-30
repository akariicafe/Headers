@interface ATXMPBAppLaunchOverallCaptureRateTracker : PBCodable <NSCopying> {
    struct { unsigned char captureType : 1; unsigned char iconLocation : 1; unsigned char appLibraryEnabled : 1; unsigned char appPredictionPanelEnabled : 1; unsigned char appPredictionPanelTodayEnabled : 1; unsigned char spotlightEnabled : 1; unsigned char suggestionsWidgetEnabled : 1; unsigned char suggestionsWidgetTodayEnabled : 1; } _has;
}

@property (nonatomic) BOOL hasCaptureType;
@property (nonatomic) int captureType;
@property (nonatomic) BOOL hasIconLocation;
@property (nonatomic) int iconLocation;
@property (nonatomic) BOOL hasSpotlightEnabled;
@property (nonatomic) BOOL spotlightEnabled;
@property (nonatomic) BOOL hasAppLibraryEnabled;
@property (nonatomic) BOOL appLibraryEnabled;
@property (nonatomic) BOOL hasAppPredictionPanelEnabled;
@property (nonatomic) BOOL appPredictionPanelEnabled;
@property (nonatomic) BOOL hasAppPredictionPanelTodayEnabled;
@property (nonatomic) BOOL appPredictionPanelTodayEnabled;
@property (nonatomic) BOOL hasSuggestionsWidgetEnabled;
@property (nonatomic) BOOL suggestionsWidgetEnabled;
@property (nonatomic) BOOL hasSuggestionsWidgetTodayEnabled;
@property (nonatomic) BOOL suggestionsWidgetTodayEnabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)captureTypeAsString:(int)a0;
- (int)StringAsCaptureType:(id)a0;
- (id)iconLocationAsString:(int)a0;
- (int)StringAsIconLocation:(id)a0;

@end
