@class GEOPDGuidesLocationEntry, NSString, GEOPDEntity, GEOMapItemIdentifier, GEOPDGuidesLocationEntryTypeWorldWide, GEOPDGuideGroup;

@interface GEOGuideLocation : NSObject {
    GEOPDGuidesLocationEntry *_guideLocation;
    GEOPDGuidesLocationEntryTypeWorldWide *_worldwideGuideLocation;
    GEOPDEntity *_placeEntity;
    GEOPDGuideGroup *_guideGroup;
}

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) unsigned long long numberOfGuides;
@property (readonly, nonatomic) GEOMapItemIdentifier *guideLocationIdentifier;
@property (readonly, nonatomic) NSString *country;

+ (id)guideLocationsForEntries:(id)a0 mapsResults:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithWorldwideGuideLocation:(id)a0;
- (id)initWithGuideLocation:(id)a0 mapsResult:(id)a1;
- (id)initWithChildAction:(id)a0;
- (id)initWithGuideLocation:(id)a0;
- (id)pdWorldwideLocationEntry;
- (id)pdLocationEntry;
- (id)photosForType:(long long)a0;

@end
