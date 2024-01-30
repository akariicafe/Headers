@class NSPointerArray, NSHashTable;

@interface _PXPhotosDetailsPurger : NSObject {
    NSHashTable *_allViewControllers;
    NSPointerArray *_lastUsedViewControllers;
}

+ (id)sharedPurger;

- (void).cxx_destruct;
- (id)init;
- (void)didReceiveMemoryWarning:(id)a0;
- (void)purgeOldViewControllers;
- (void)detailsViewControllerDidAppear:(id)a0;
- (void)_purgeAllViewControllers;

@end
