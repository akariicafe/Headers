@class SFTableHeaderRowCardSection, SFProductCardSection, SFTextColumnsCardSection, SFCollectionCardSection, SFHorizontalScrollCardSection, SFButtonCardSection, SFListenToCardSection, SFMediaInfoCardSection, SFHorizontalButtonCardSection, SFWatchNowCardSection, SFVerticalLayoutCardSection, SFMapsDetailedRowCardSection, SFMessageCardSection, SFMapCardSection, SFScoreboardCardSection, SFTrackListCardSection, SFStockChartCardSection, SFFindMyCardSection, SFKeyValueDataCardSection, SFRichTitleCardSection, SFColorBarCardSection, SFAttributionFooterCardSection, SFTableRowCardSection, SFFlightCardSection, SFInfoCardSection, NSData, SFNewsCardSection, SFMediaPlayerCardSection, SFWebCardSection, SFPersonHeaderCardSection, SFDetailedRowCardSection, SFCombinedCardSection, SFSocialMediaPostCardSection, SFResponseWrapperCardSection, SFTitleCardSection, SFAudioPlaybackCardSection, SFImagesCardSection, SFGridCardSection, SFSplitCardSection, NSString, SFSectionHeaderCardSection, SFWorldMapCardSection, SFWatchListCardSection, SFMapPlaceCardSection, SFMiniCardSection, SFDescriptionCardSection, SFActivityIndicatorCardSection, SFRowCardSection, NSDictionary, SFLinkPresentationCardSection, SFMetaInfoCardSection, SFAppLinkCardSection, SFSelectableGridCardSection, SFHeroCardSection, SFMediaRemoteControlCardSection, SFSuggestionCardSection, SFStrokeAnimationCardSection, SFNowPlayingCardSection, SFCompactRowCardSection;

@interface SFCardSectionValue : NSObject <SFCardSectionValue, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SFAppLinkCardSection *appLinkCardSection;
@property (retain, nonatomic) SFDescriptionCardSection *descriptionCardSection;
@property (retain, nonatomic) SFKeyValueDataCardSection *keyValueDataCardSection;
@property (retain, nonatomic) SFMapCardSection *mapCardSection;
@property (retain, nonatomic) SFMediaInfoCardSection *mediaInfoCardSection;
@property (retain, nonatomic) SFMediaPlayerCardSection *mediaPlayerCardSection;
@property (retain, nonatomic) SFNowPlayingCardSection *nowPlayingCardSection;
@property (retain, nonatomic) SFRichTitleCardSection *richTitleCardSection;
@property (retain, nonatomic) SFRowCardSection *rowCardSection;
@property (retain, nonatomic) SFScoreboardCardSection *scoreboardCardSection;
@property (retain, nonatomic) SFSocialMediaPostCardSection *socialMediaPostCardSection;
@property (retain, nonatomic) SFStockChartCardSection *stockChartCardSection;
@property (retain, nonatomic) SFTableHeaderRowCardSection *tableHeaderRowCardSection;
@property (retain, nonatomic) SFTableRowCardSection *tableRowCardSection;
@property (retain, nonatomic) SFTextColumnsCardSection *textColumnsCardSection;
@property (retain, nonatomic) SFTitleCardSection *titleCardSection;
@property (retain, nonatomic) SFTrackListCardSection *trackListCardSection;
@property (retain, nonatomic) SFAudioPlaybackCardSection *audioPlaybackCardSection;
@property (retain, nonatomic) SFFlightCardSection *flightCardSection;
@property (retain, nonatomic) SFActivityIndicatorCardSection *activityIndicatorCardSection;
@property (retain, nonatomic) SFWebCardSection *webCardSection;
@property (retain, nonatomic) SFMessageCardSection *messageCardSection;
@property (retain, nonatomic) SFDetailedRowCardSection *detailedRowCardSection;
@property (retain, nonatomic) SFImagesCardSection *imagesCardSection;
@property (retain, nonatomic) SFSuggestionCardSection *suggestionCardSection;
@property (retain, nonatomic) SFSelectableGridCardSection *selectableGridCardSection;
@property (retain, nonatomic) SFSectionHeaderCardSection *sectionHeaderCardSection;
@property (retain, nonatomic) SFMetaInfoCardSection *metaInfoCardSection;
@property (retain, nonatomic) SFWatchListCardSection *watchListCardSection;
@property (retain, nonatomic) SFMapsDetailedRowCardSection *mapsDetailedRowCardSection;
@property (retain, nonatomic) SFButtonCardSection *buttonCardSection;
@property (retain, nonatomic) SFHorizontalButtonCardSection *horizontalButtonCardSection;
@property (retain, nonatomic) SFVerticalLayoutCardSection *verticalLayoutCardSection;
@property (retain, nonatomic) SFProductCardSection *productCardSection;
@property (retain, nonatomic) SFHorizontalScrollCardSection *horizontalScrollCardSection;
@property (retain, nonatomic) SFMediaRemoteControlCardSection *mediaRemoteControlCardSection;
@property (retain, nonatomic) SFMapPlaceCardSection *mapPlaceCardSection;
@property (retain, nonatomic) SFCompactRowCardSection *compactRowCardSection;
@property (retain, nonatomic) SFWorldMapCardSection *worldMapCardSection;
@property (retain, nonatomic) SFAttributionFooterCardSection *attributionFooterCardSection;
@property (retain, nonatomic) SFGridCardSection *gridCardSection;
@property (retain, nonatomic) SFPersonHeaderCardSection *personHeaderCardSection;
@property (retain, nonatomic) SFColorBarCardSection *colorBarCardSection;
@property (retain, nonatomic) SFSplitCardSection *splitCardSection;
@property (retain, nonatomic) SFLinkPresentationCardSection *linkPresentationCardSection;
@property (retain, nonatomic) SFFindMyCardSection *findMyCardSection;
@property (retain, nonatomic) SFHeroCardSection *heroCardSection;
@property (retain, nonatomic) SFNewsCardSection *newsCardSection;
@property (retain, nonatomic) SFMiniCardSection *miniCardSection;
@property (retain, nonatomic) SFInfoCardSection *infoCardSection;
@property (retain, nonatomic) SFCollectionCardSection *collectionCardSection;
@property (retain, nonatomic) SFCombinedCardSection *combinedCardSection;
@property (retain, nonatomic) SFResponseWrapperCardSection *responseWrapperCardSection;
@property (retain, nonatomic) SFListenToCardSection *listenToCardSection;
@property (retain, nonatomic) SFWatchNowCardSection *watchNowCardSection;
@property (retain, nonatomic) SFStrokeAnimationCardSection *strokeAnimationCardSection;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
