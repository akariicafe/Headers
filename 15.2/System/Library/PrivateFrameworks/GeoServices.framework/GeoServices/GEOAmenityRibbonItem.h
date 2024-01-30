@class NSArray, GEOPDAmenityRibbonItem;

@interface GEOAmenityRibbonItem : NSObject {
    GEOPDAmenityRibbonItem *_amenityItem;
}

@property (readonly, nonatomic) NSArray *indexesWithinAmenityComponent;

- (id)initWithRibbonItem:(id)a0;
- (void).cxx_destruct;

@end
