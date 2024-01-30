@class NSString;

@interface AEReviewAssetProvider : NSObject <PUReviewAssetProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)reviewAssetProviderRequestForDisplayAsset:(id)a0;

@end
