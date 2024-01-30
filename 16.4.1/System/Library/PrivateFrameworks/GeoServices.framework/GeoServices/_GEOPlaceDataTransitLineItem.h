@class NSArray, NSString, GEOMapItemIdentifier, GEOMapRegion;
@protocol GEOTransitLine, GEOMapItemTransitInfo, GEOTransitAttribution, GEOEncyclopedicInfo, GEOTransitArtworkDataSource, GEOTransitSystem;

@interface _GEOPlaceDataTransitLineItem : NSObject <GEOTransitLineItem> {
    id<GEOTransitAttribution> _attribution;
    id<GEOTransitLine> _line;
    id<GEOMapItemTransitInfo> _transitInfo;
    GEOMapRegion *_mapRegion;
    BOOL _hasEncyclopedicInfo;
    id<GEOEncyclopedicInfo> _encyclopedicInfo;
}

@property (readonly, nonatomic) NSArray *labelItems;
@property (readonly, nonatomic) id<GEOTransitAttribution> attribution;
@property (readonly, nonatomic) GEOMapRegion *mapRegion;
@property (readonly, nonatomic) NSArray *incidents;
@property (readonly, nonatomic) BOOL isIncidentsTTLExpired;
@property (readonly, nonatomic) BOOL hasIncidentComponent;
@property (readonly, nonatomic) BOOL hasEncyclopedicInfo;
@property (readonly, nonatomic) id<GEOEncyclopedicInfo> encyclopedicInfo;
@property (readonly, nonatomic) unsigned long long muid;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) GEOMapItemIdentifier *identifier;
@property (readonly, nonatomic) id<GEOTransitSystem> system;
@property (readonly, nonatomic) unsigned long long departureTimeDisplayStyle;
@property (readonly, nonatomic) BOOL departuresAreVehicleSpecific;
@property (readonly, nonatomic) BOOL isBus;
@property (readonly, nonatomic) id<GEOTransitArtworkDataSource> artwork;
@property (readonly, nonatomic) id<GEOTransitArtworkDataSource> modeArtwork;
@property (readonly, nonatomic) id<GEOTransitArtworkDataSource> alternateArtwork;
@property (readonly, nonatomic) id<GEOTransitArtworkDataSource> headerArtwork;
@property (readonly, nonatomic) BOOL hasLineColorString;
@property (readonly, nonatomic) NSString *lineColorString;
@property (readonly, nonatomic) BOOL showVehicleNumber;
@property (readonly, nonatomic) NSArray *operatingHours;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMapItem:(id)a0;
- (void).cxx_destruct;

@end
