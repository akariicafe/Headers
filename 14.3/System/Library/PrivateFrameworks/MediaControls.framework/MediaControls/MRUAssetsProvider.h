@class NSMutableDictionary, UIImage, NSCache;

@interface MRUAssetsProvider : NSObject

@property (class, readonly, nonatomic) MRUAssetsProvider *sharedAssetsProvider;
@property (class, readonly, nonatomic) UIImage *airplay;
@property (class, readonly, nonatomic) UIImage *airplayVideo;
@property (class, readonly, nonatomic) UIImage *controlOtherSpeakers;
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
@property (class, readonly, nonatomic) UIImage *routingOutline;
@property (class, readonly, nonatomic) UIImage *routingAccessoryMultiDeselected;
@property (class, readonly, nonatomic) UIImage *routingAccessorySelected;
@property (class, readonly, nonatomic) UIImage *routingAccessoryMultiSelected;

@property (readonly) NSMutableDictionary *completionBlocks;
@property (readonly) NSCache *imageCache;

+ (id)applicationIconForBundleIdentifier:(id)a0;
+ (id)systemImageNamedNumberAware:(id)a0;
+ (id)airPlayControlAudioForInterfaceStyle:(long long)a0;
+ (id)airPlayControlVideoForInterfaceStyle:(long long)a0;
+ (id)packageWithName:(id)a0;
+ (id)mapImageNameNumberAware:(id)a0;
+ (id)goBackwardForTimeInterval:(double)a0;
+ (id)goForwardForTimeInterval:(double)a0;
+ (id)volumeThumbWithSize:(double)a0;
+ (id)volumeTrackWithHeight:(double)a0;

- (id)init;
- (void).cxx_destruct;
- (void)imageForURL:(id)a0 completion:(id /* block */)a1;

@end
