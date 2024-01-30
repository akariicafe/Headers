@class MADVIVisualSearchGatingResultItem, NSString, MADVIVisualSearchGatingDomainInfo, MADVIVisualSearchResultItem, UIMenu;

@interface VKCVisualSearchResultItem : NSObject <VKAnalysisElementDebugMenuProvider>

@property (retain, nonatomic) MADVIVisualSearchGatingResultItem *resultItem;
@property (retain, nonatomic) MADVIVisualSearchResultItem *searchItem;
@property (nonatomic) unsigned long long queryID;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } normalizedBoundingBox;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } normalizedIconLocation;
@property (readonly, nonatomic) BOOL shouldPlaceInCorner;
@property (readonly, nonatomic) NSString *glyphName;
@property (retain, nonatomic) MADVIVisualSearchGatingDomainInfo *domainInfo;
@property (readonly, nonatomic) UIMenu *debugMenu;

- (void).cxx_destruct;
- (BOOL)_hasFocalPoint;
- (id)initWithGatingResultItem:(id)a0 domain:(id)a1;
- (id)initWithSearchResultItem:(id)a0;

@end
