@class NSArray, GEOPDAmenityRibbonItem;

@interface GEOAmenityRibbonItem : NSObject {
    GEOPDAmenityRibbonItem *_amenityItem;
}

@property (readonly, nonatomic) NSArray *indexesWithinAmenityComponent;

- (void).cxx_destruct;
- (id)initWithRibbonItem:(id)a0;

@end
