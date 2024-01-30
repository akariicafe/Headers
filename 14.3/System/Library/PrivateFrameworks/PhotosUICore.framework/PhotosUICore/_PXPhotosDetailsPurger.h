@class NSPointerArray, NSHashTable;

@interface _PXPhotosDetailsPurger : NSObject {
    NSHashTable *_allViewControllers;
    NSPointerArray *_lastUsedViewControllers;
}

+ (id)sharedPurger;

- (id)init;
- (void).cxx_destruct;
- (void)purgeOldViewControllers;
- (void)detailsViewControllerDidAppear:(id)a0;
- (void)_purgeAllViewControllers;
- (void)didReceiveMemoryWarning:(id)a0;

@end
