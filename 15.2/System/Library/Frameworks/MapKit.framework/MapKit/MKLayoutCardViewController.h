@class NSMutableDictionary, MKMapItem;

@interface MKLayoutCardViewController : MKStackingViewController

@property (retain, nonatomic) NSMutableDictionary *cacheVC;
@property (retain, nonatomic) NSMutableDictionary *cacheModuleType;
@property (retain, nonatomic) MKMapItem *mapItem;

- (BOOL)isTransitItem;
- (id)_createViewControllerForModule:(id)a0;
- (void).cxx_destruct;
- (id)_layoutModuleForMapItem;
- (id)_cachedViewControllerForModule:(int)a0;
- (BOOL)isLayoutDynamic;
- (void)_createModuleLayout:(id)a0;

@end
