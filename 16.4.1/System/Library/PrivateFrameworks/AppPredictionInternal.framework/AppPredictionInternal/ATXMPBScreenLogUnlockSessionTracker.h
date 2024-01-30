@interface ATXMPBScreenLogUnlockSessionTracker : PBCodable <NSCopying> {
    struct { unsigned char numEngagementsInAppLibrary : 1; unsigned char numEngagementsInAppPredictionPanel : 1; unsigned char numEngagementsInAppPredictionPanelTodayPage : 1; unsigned char numEngagementsInSpotlightActions : 1; unsigned char numEngagementsInSpotlightApps : 1; unsigned char numEngagementsInSuggestionsWidget : 1; unsigned char numEngagementsInSuggestionsWidgetTodayPage : 1; unsigned char sessionLengthInSeconds : 1; unsigned char appLibraryEnabled : 1; unsigned char appLibraryViewed : 1; unsigned char appPredictionPanelEnabled : 1; unsigned char appPredictionPanelTodayPageEnabled : 1; unsigned char appPredictionPanelTodayPageViewed : 1; unsigned char appPredictionPanelViewed : 1; unsigned char spotlightActionsViewed : 1; unsigned char spotlightAppsViewed : 1; unsigned char spotlightEnabled : 1; unsigned char suggestionsWidgetEnabled : 1; unsigned char suggestionsWidgetTodayPageEnabled : 1; unsigned char suggestionsWidgetTodayPageViewed : 1; unsigned char suggestionsWidgetViewed : 1; } _has;
}

@property (nonatomic) BOOL hasSessionLengthInSeconds;
@property (nonatomic) unsigned int sessionLengthInSeconds;
@property (nonatomic) BOOL hasNumEngagementsInSpotlightApps;
@property (nonatomic) unsigned int numEngagementsInSpotlightApps;
@property (nonatomic) BOOL hasNumEngagementsInSpotlightActions;
@property (nonatomic) unsigned int numEngagementsInSpotlightActions;
@property (nonatomic) BOOL hasNumEngagementsInSuggestionsWidget;
@property (nonatomic) unsigned int numEngagementsInSuggestionsWidget;
@property (nonatomic) BOOL hasNumEngagementsInAppPredictionPanel;
@property (nonatomic) unsigned int numEngagementsInAppPredictionPanel;
@property (nonatomic) BOOL hasNumEngagementsInAppLibrary;
@property (nonatomic) unsigned int numEngagementsInAppLibrary;
@property (nonatomic) BOOL hasSpotlightEnabled;
@property (nonatomic) BOOL spotlightEnabled;
@property (nonatomic) BOOL hasSuggestionsWidgetEnabled;
@property (nonatomic) BOOL suggestionsWidgetEnabled;
@property (nonatomic) BOOL hasAppPredictionPanelEnabled;
@property (nonatomic) BOOL appPredictionPanelEnabled;
@property (nonatomic) BOOL hasAppLibraryEnabled;
@property (nonatomic) BOOL appLibraryEnabled;
@property (nonatomic) BOOL hasSpotlightAppsViewed;
@property (nonatomic) BOOL spotlightAppsViewed;
@property (nonatomic) BOOL hasSpotlightActionsViewed;
@property (nonatomic) BOOL spotlightActionsViewed;
@property (nonatomic) BOOL hasSuggestionsWidgetViewed;
@property (nonatomic) BOOL suggestionsWidgetViewed;
@property (nonatomic) BOOL hasAppPredictionPanelViewed;
@property (nonatomic) BOOL appPredictionPanelViewed;
@property (nonatomic) BOOL hasAppLibraryViewed;
@property (nonatomic) BOOL appLibraryViewed;
@property (nonatomic) BOOL hasSuggestionsWidgetTodayPageViewed;
@property (nonatomic) BOOL suggestionsWidgetTodayPageViewed;
@property (nonatomic) BOOL hasAppPredictionPanelTodayPageViewed;
@property (nonatomic) BOOL appPredictionPanelTodayPageViewed;
@property (nonatomic) BOOL hasNumEngagementsInSuggestionsWidgetTodayPage;
@property (nonatomic) unsigned int numEngagementsInSuggestionsWidgetTodayPage;
@property (nonatomic) BOOL hasNumEngagementsInAppPredictionPanelTodayPage;
@property (nonatomic) unsigned int numEngagementsInAppPredictionPanelTodayPage;
@property (nonatomic) BOOL hasSuggestionsWidgetTodayPageEnabled;
@property (nonatomic) BOOL suggestionsWidgetTodayPageEnabled;
@property (nonatomic) BOOL hasAppPredictionPanelTodayPageEnabled;
@property (nonatomic) BOOL appPredictionPanelTodayPageEnabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
