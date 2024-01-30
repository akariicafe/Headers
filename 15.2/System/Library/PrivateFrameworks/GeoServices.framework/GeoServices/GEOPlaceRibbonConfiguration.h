@class NSArray, GEOPDPlaceRibbonConfiguration;

@interface GEOPlaceRibbonConfiguration : NSObject {
    GEOPDPlaceRibbonConfiguration *_ribbonConfig;
}

@property (readonly, nonatomic) NSArray *ribbonItems;

- (id)initWithRibbonConfiguration:(id)a0;
- (void)_buildRibbonItems;
- (void)_addRegularRibbonEntryForType:(int)a0 toArray:(id)a1;
- (void)_addAmenityEntryForRibbonItem:(id)a0 toArray:(id)a1;
- (void)_addFactoidEntriesForRibbonItem:(id)a0 toArray:(id)a1;
- (void).cxx_destruct;

@end
