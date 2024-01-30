@class NSArray, NSString;
@protocol SVAVURLAssetFactory;

@interface SVAVPlayerItemFactory : NSObject <SVAVPlayerItemFactory>

@property (readonly, copy, nonatomic) NSArray *automaticallyLoadedAssetKeys;
@property (readonly, nonatomic) id<SVAVURLAssetFactory> assetFactory;
@property (readonly, nonatomic) double preferredForwardBufferDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)createPlayerItemWithURL:(id)a0;
- (id)initWithAutomaticallyLoadedAssetKeys:(id)a0 assetFactory:(id)a1 preferredForwardBufferDuration:(double)a2;

@end
