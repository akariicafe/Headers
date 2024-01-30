@class NSString;
@protocol PXAssetsSharingHelperDelegate;

@interface PUAssetSharingHelper : NSObject <PXAssetsSharingHelper>

@property (weak, nonatomic) id<PXAssetsSharingHelperDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)copyAssets:(id)a0 completionHandler:(id /* block */)a1;
+ (void)_ensureLocalAssets:(id)a0 forReason:(id)a1 completion:(id /* block */)a2;

@end
