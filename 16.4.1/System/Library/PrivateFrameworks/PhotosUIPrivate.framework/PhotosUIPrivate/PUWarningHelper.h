@class NSArray;

@interface PUWarningHelper : NSObject

@property (retain, nonatomic, setter=_setAssets:) NSArray *_assets;

+ (id)_suffix:(id)a0;
+ (id)alertControllerForAssets:(id)a0 inCollection:(id)a1 cancelAction:(id /* block */)a2 removeTitle:(id)a3 removeAction:(id /* block */)a4 deleteAction:(id /* block */)a5;
+ (void)getAssetTypeCountsForAssets:(id)a0 photosCount:(long long *)a1 videosCount:(long long *)a2 othersCount:(long long *)a3;
+ (id)getCombinedRemovalDeletionWarningMessageForAssets:(id)a0;
+ (id)getRemovalWarningMessageForAssets:(id)a0;

- (void).cxx_destruct;

@end
