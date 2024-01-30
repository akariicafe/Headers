@class NSArray, NSString;
@protocol SXAVURLAssetFactory;

@interface SXAVPlayerItemFactory : NSObject <SXAVPlayerItemFactory>

@property (readonly, copy, nonatomic) NSArray *automaticallyLoadedAssetKeys;
@property (readonly, nonatomic) id<SXAVURLAssetFactory> assetFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)createPlayerItemWithURL:(id)a0;
- (id)initWithAutomaticallyLoadedAssetKeys:(id)a0 assetFactory:(id)a1;

@end
