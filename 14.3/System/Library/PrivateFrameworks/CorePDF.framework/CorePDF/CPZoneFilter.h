@class CPPage;

@interface CPZoneFilter : NSObject {
    CPPage *page;
    double minArea;
}

+ (void)filterZonesInPage:(id)a0;

- (id)initWithPage:(id)a0;
- (void)filterZonesInZone:(id)a0;
- (void)findBackgroundGraphicsInZone:(id)a0;
- (void)findUsedGraphicsInZone:(id)a0;

@end
