@class NSString, NSMutableArray, NSData;

@interface COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSWidgetEngagement : PBCodable <NSCopying> {
    struct { unsigned char contentFetchDate : 1; unsigned char widgetArticleCount : 1; unsigned char widgetArticleCountInSection : 1; unsigned char widgetArticleRank : 1; unsigned char widgetArticleRankInSection : 1; unsigned char widgetContentType : 1; unsigned char widgetDisplayMode : 1; unsigned char widgetEngagementType : 1; unsigned char widgetExposureStackLocation : 1; unsigned char widgetSectionDisplayRank : 1; unsigned char widgetType : 1; unsigned char widgetVideoPresentationReason : 1; } _has;
}

@property (nonatomic) BOOL hasWidgetEngagementType;
@property (nonatomic) int widgetEngagementType;
@property (readonly, nonatomic) BOOL hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;
@property (readonly, nonatomic) BOOL hasWidgetSectionId;
@property (retain, nonatomic) NSString *widgetSectionId;
@property (nonatomic) BOOL hasWidgetSectionDisplayRank;
@property (nonatomic) int widgetSectionDisplayRank;
@property (nonatomic) BOOL hasWidgetArticleRankInSection;
@property (nonatomic) int widgetArticleRankInSection;
@property (nonatomic) BOOL hasWidgetArticleRank;
@property (nonatomic) int widgetArticleRank;
@property (nonatomic) BOOL hasWidgetArticleCount;
@property (nonatomic) int widgetArticleCount;
@property (retain, nonatomic) NSMutableArray *otherVisibleSections;
@property (readonly, nonatomic) BOOL hasArticleViewingSessionId;
@property (retain, nonatomic) NSData *articleViewingSessionId;
@property (nonatomic) BOOL hasWidgetVideoPresentationReason;
@property (nonatomic) int widgetVideoPresentationReason;
@property (nonatomic) BOOL hasWidgetArticleCountInSection;
@property (nonatomic) int widgetArticleCountInSection;
@property (readonly, nonatomic) BOOL hasWidgetUserId;
@property (retain, nonatomic) NSString *widgetUserId;
@property (nonatomic) BOOL hasWidgetContentType;
@property (nonatomic) int widgetContentType;
@property (readonly, nonatomic) BOOL hasWebEmbedId;
@property (retain, nonatomic) NSString *webEmbedId;
@property (readonly, nonatomic) BOOL hasEngagementTargetUrl;
@property (retain, nonatomic) NSString *engagementTargetUrl;
@property (readonly, nonatomic) BOOL hasContentId;
@property (retain, nonatomic) NSString *contentId;
@property (nonatomic) BOOL hasContentFetchDate;
@property (nonatomic) long long contentFetchDate;
@property (nonatomic) BOOL hasWidgetDisplayMode;
@property (nonatomic) int widgetDisplayMode;
@property (readonly, nonatomic) BOOL hasWidgetContentId;
@property (retain, nonatomic) NSString *widgetContentId;
@property (nonatomic) BOOL hasWidgetExposureStackLocation;
@property (nonatomic) int widgetExposureStackLocation;
@property (nonatomic) BOOL hasWidgetType;
@property (nonatomic) int widgetType;
@property (readonly, nonatomic) BOOL hasWidgetSectionSubid;
@property (retain, nonatomic) NSString *widgetSectionSubid;

+ (Class)otherVisibleSectionsType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addOtherVisibleSections:(id)a0;
- (void)clearOtherVisibleSections;
- (unsigned long long)otherVisibleSectionsCount;
- (id)otherVisibleSectionsAtIndex:(unsigned long long)a0;
- (id)widgetVideoPresentationReasonAsString:(int)a0;
- (int)StringAsWidgetVideoPresentationReason:(id)a0;
- (id)widgetContentTypeAsString:(int)a0;
- (int)StringAsWidgetContentType:(id)a0;
- (id)widgetDisplayModeAsString:(int)a0;
- (int)StringAsWidgetDisplayMode:(id)a0;
- (id)widgetExposureStackLocationAsString:(int)a0;
- (int)StringAsWidgetExposureStackLocation:(id)a0;
- (id)widgetTypeAsString:(int)a0;
- (int)StringAsWidgetType:(id)a0;
- (id)widgetEngagementTypeAsString:(int)a0;
- (int)StringAsWidgetEngagementType:(id)a0;

@end
