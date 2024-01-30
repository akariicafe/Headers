@class _SFPBHorizontalButtonCardSection, _SFPBAppLinkCardSection, _SFPBActivityIndicatorCardSection, _SFPBMessageCardSection, _SFPBMetaInfoCardSection, _SFPBNowPlayingCardSection, _SFPBSocialMediaPostCardSection, _SFPBMediaInfoCardSection, _SFPBWorldMapCardSection, _SFPBSectionHeaderCardSection, _SFPBSuggestionCardSection, _SFPBButtonCardSection, _SFPBDetailedRowCardSection, _SFPBProductCardSection, _SFPBTrackListCardSection, NSData, _SFPBTitleCardSection, _SFPBVerticalLayoutCardSection, _SFPBAudioPlaybackCardSection, _SFPBDescriptionCardSection, _SFPBMapsDetailedRowCardSection, _SFPBRowCardSection, _SFPBMediaPlayerCardSection, _SFPBHorizontalScrollCardSection, _SFPBTableRowCardSection, _SFPBCompactRowCardSection, _SFPBTableHeaderRowCardSection, _SFPBMapCardSection, _SFPBGridCardSection, _SFPBRichTitleCardSection, _SFPBSelectableGridCardSection, _SFPBMapPlaceCardSection, _SFPBScoreboardCardSection, _SFPBTextColumnsCardSection, _SFPBAttributionFooterCardSection, NSString, _SFPBImagesCardSection, _SFPBStockChartCardSection, _SFPBWebCardSection, _SFPBFlightCardSection, _SFPBWatchListCardSection, _SFPBMediaRemoteControlCardSection, _SFPBKeyValueDataCardSection;

@interface _SFPBCardSectionValue : PBCodable <_SFPBCardSectionValue, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _SFPBAppLinkCardSection *appLinkCardSection;
@property (retain, nonatomic) _SFPBDescriptionCardSection *descriptionCardSection;
@property (retain, nonatomic) _SFPBKeyValueDataCardSection *keyValueDataCardSection;
@property (retain, nonatomic) _SFPBMapCardSection *mapCardSection;
@property (retain, nonatomic) _SFPBMediaInfoCardSection *mediaInfoCardSection;
@property (retain, nonatomic) _SFPBMediaPlayerCardSection *mediaPlayerCardSection;
@property (retain, nonatomic) _SFPBNowPlayingCardSection *nowPlayingCardSection;
@property (retain, nonatomic) _SFPBRichTitleCardSection *richTitleCardSection;
@property (retain, nonatomic) _SFPBRowCardSection *rowCardSection;
@property (retain, nonatomic) _SFPBScoreboardCardSection *scoreboardCardSection;
@property (retain, nonatomic) _SFPBSocialMediaPostCardSection *socialMediaPostCardSection;
@property (retain, nonatomic) _SFPBStockChartCardSection *stockChartCardSection;
@property (retain, nonatomic) _SFPBTableHeaderRowCardSection *tableHeaderRowCardSection;
@property (retain, nonatomic) _SFPBTableRowCardSection *tableRowCardSection;
@property (retain, nonatomic) _SFPBTextColumnsCardSection *textColumnsCardSection;
@property (retain, nonatomic) _SFPBTitleCardSection *titleCardSection;
@property (retain, nonatomic) _SFPBTrackListCardSection *trackListCardSection;
@property (retain, nonatomic) _SFPBAudioPlaybackCardSection *audioPlaybackCardSection;
@property (retain, nonatomic) _SFPBFlightCardSection *flightCardSection;
@property (retain, nonatomic) _SFPBActivityIndicatorCardSection *activityIndicatorCardSection;
@property (retain, nonatomic) _SFPBWebCardSection *webCardSection;
@property (retain, nonatomic) _SFPBMessageCardSection *messageCardSection;
@property (retain, nonatomic) _SFPBDetailedRowCardSection *detailedRowCardSection;
@property (retain, nonatomic) _SFPBImagesCardSection *imagesCardSection;
@property (retain, nonatomic) _SFPBSuggestionCardSection *suggestionCardSection;
@property (retain, nonatomic) _SFPBSelectableGridCardSection *selectableGridCardSection;
@property (retain, nonatomic) _SFPBSectionHeaderCardSection *sectionHeaderCardSection;
@property (retain, nonatomic) _SFPBMetaInfoCardSection *metaInfoCardSection;
@property (retain, nonatomic) _SFPBWatchListCardSection *watchListCardSection;
@property (retain, nonatomic) _SFPBMapsDetailedRowCardSection *mapsDetailedRowCardSection;
@property (retain, nonatomic) _SFPBButtonCardSection *buttonCardSection;
@property (retain, nonatomic) _SFPBHorizontalButtonCardSection *horizontalButtonCardSection;
@property (retain, nonatomic) _SFPBVerticalLayoutCardSection *verticalLayoutCardSection;
@property (retain, nonatomic) _SFPBProductCardSection *productCardSection;
@property (retain, nonatomic) _SFPBHorizontalScrollCardSection *horizontalScrollCardSection;
@property (retain, nonatomic) _SFPBMediaRemoteControlCardSection *mediaRemoteControlCardSection;
@property (retain, nonatomic) _SFPBMapPlaceCardSection *mapPlaceCardSection;
@property (retain, nonatomic) _SFPBCompactRowCardSection *compactRowCardSection;
@property (retain, nonatomic) _SFPBWorldMapCardSection *worldMapCardSection;
@property (retain, nonatomic) _SFPBAttributionFooterCardSection *attributionFooterCardSection;
@property (retain, nonatomic) _SFPBGridCardSection *gridCardSection;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (id)initWithFacade:(id)a0;

@end
