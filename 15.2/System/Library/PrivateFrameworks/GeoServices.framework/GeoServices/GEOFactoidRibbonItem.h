@class GEOPDFactoidRibbonItem;

@interface GEOFactoidRibbonItem : NSObject {
    GEOPDFactoidRibbonItem *_factoidItem;
}

@property (readonly, nonatomic) int indexWithinFactoidComponent;

- (id)initWithFactoidRibbonItem:(id)a0;
- (void).cxx_destruct;

@end
