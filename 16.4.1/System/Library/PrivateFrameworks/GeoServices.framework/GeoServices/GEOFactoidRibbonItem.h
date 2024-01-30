@class GEOPDFactoidRibbonItem;

@interface GEOFactoidRibbonItem : NSObject {
    GEOPDFactoidRibbonItem *_factoidItem;
}

@property (readonly, nonatomic) int indexWithinFactoidComponent;

- (void).cxx_destruct;
- (id)initWithFactoidRibbonItem:(id)a0;

@end
