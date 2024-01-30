@class NSString, NSMutableDictionary, UIImage, NSDate, NSCache;

@interface MRUAssetsProvider : NSObject

@property (class, readonly, nonatomic) MRUAssetsProvider *sharedAssetsProvider;
@property (class, readonly, nonatomic) UIImage *airplay;
@property (class, readonly, nonatomic) UIImage *airplayVideo;
@property (class, readonly, nonatomic) UIImage *controlOtherSpeakers;
@property (class, readonly, nonatomic) UIImage *wirelessSharing;
@property (class, readonly, nonatomic) UIImage *genericDevices;
@property (class, readonly, nonatomic) NSString *playSymbol;
@property (class, readonly, nonatomic) NSString *pauseSymbol;
@property (class, readonly, nonatomic) NSString *stopSymbol;
@property (class, readonly, nonatomic) NSString *backwardSymbol;
@property (class, readonly, nonatomic) NSString *forwardSymbol;
@property (class, readonly, nonatomic) NSString *favoriteSymbol;
@property (class, readonly, nonatomic) NSString *playPauseStopPackageName;
@property (class, readonly, nonatomic) NSString *forwardBackwardPackageName;
@property (class, readonly, nonatomic) NSString *favoritePackageName;
@property (class, readonly, nonatomic) UIImage *play;
@property (class, readonly, nonatomic) UIImage *pause;
@property (class, readonly, nonatomic) UIImage *stop;
@property (class, readonly, nonatomic) UIImage *tvRemote;
@property (class, readonly, nonatomic) UIImage *languageOptions;
@property (class, readonly, nonatomic) UIImage *backward;
@property (class, readonly, nonatomic) UIImage *forward;
@property (class, readonly, nonatomic) UIImage *menu;
@property (class, readonly, nonatomic) UIImage *like;
@property (class, readonly, nonatomic) UIImage *dislike;
@property (class, readonly, nonatomic) UIImage *wishlist;
@property (class, readonly, nonatomic) UIImage *volumeMin;
@property (class, readonly, nonatomic) UIImage *volumeMax;
@property (class, readonly, nonatomic) UIImage *volumeRelativeMinus;
@property (class, readonly, nonatomic) UIImage *volumeRelativePlus;
@property (class, readonly, nonatomic) UIImage *collapsedRoutingChevron;
@property (class, readonly, nonatomic) UIImage *expandedRoutingChevron;
@property (class, readonly, nonatomic) UIImage *routingAccessoryMultiDeselected;
@property (class, readonly, nonatomic) UIImage *routingAccessorySelected;
@property (class, readonly, nonatomic) UIImage *routingAccessoryMultiSelected;
@property (class, readonly, nonatomic) UIImage *routingNearby;
@property (class, readonly, nonatomic) UIImage *phone;
@property (class, readonly, nonatomic) UIImage *sharing;
@property (class, readonly, nonatomic) UIImage *emptyArtwork;

@property (readonly) NSMutableDictionary *completionBlocks;
@property (readonly) NSCache *imageCache;
@property (readonly) NSCache *applicationCache;
@property (retain, nonatomic) NSDate *purgeApplicationCacheDate;

+ (id)goForwardForTimeInterval:(double)a0;
+ (id)goForwardSymbolForTimeInterval:(double)a0;
+ (id)goBackwardSymbolForTimeInterval:(double)a0;
+ (id)packageDescriptionWithName:(id)a0;
+ (id)packageWithName:(id)a0;
+ (id)goBackwardForTimeInterval:(double)a0;

- (void)imageForURL:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)applicationIconForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
