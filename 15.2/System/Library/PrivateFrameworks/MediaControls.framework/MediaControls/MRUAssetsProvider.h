@class NSMutableDictionary, UIImage, NSDate, NSCache;

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
@property (class, readonly, nonatomic) UIImage *phone;
@property (class, readonly, nonatomic) UIImage *sharing;
@property (class, readonly, nonatomic) UIImage *carplay;
@property (class, readonly, nonatomic) UIImage *hearingDevice;
@property (class, readonly, nonatomic) UIImage *headphones;
@property (class, readonly, nonatomic) UIImage *bluetooth;
@property (class, readonly, nonatomic) UIImage *display;
@property (class, readonly, nonatomic) UIImage *airpods;
@property (class, readonly, nonatomic) UIImage *airpodsPro;
@property (class, readonly, nonatomic) UIImage *airpodsMax;
@property (class, readonly, nonatomic) UIImage *beats;
@property (class, readonly, nonatomic) UIImage *beatsHeadphones;
@property (class, readonly, nonatomic) UIImage *beatsEarphones;
@property (class, readonly, nonatomic) UIImage *powerBeats;
@property (class, readonly, nonatomic) UIImage *powerBeatsPro;
@property (class, readonly, nonatomic) UIImage *hifi;
@property (class, readonly, nonatomic) UIImage *hifiPair;
@property (class, readonly, nonatomic) UIImage *hifiAndHomepod;
@property (class, readonly, nonatomic) UIImage *hifiAndHomepodMini;
@property (class, readonly, nonatomic) UIImage *appletv;
@property (class, readonly, nonatomic) UIImage *mediaBox;
@property (class, readonly, nonatomic) UIImage *mediaStick;
@property (class, readonly, nonatomic) UIImage *tv;
@property (class, readonly, nonatomic) UIImage *homepod;
@property (class, readonly, nonatomic) UIImage *homepodMini;
@property (class, readonly, nonatomic) UIImage *homepodAndHomepodMini;
@property (class, readonly, nonatomic) UIImage *homepodPair;
@property (class, readonly, nonatomic) UIImage *homepodMiniPair;
@property (class, readonly, nonatomic) UIImage *homepodAndAppleTV;
@property (class, readonly, nonatomic) UIImage *homepodMiniAndAppleTV;
@property (class, readonly, nonatomic) UIImage *mac;

@property (readonly) NSMutableDictionary *completionBlocks;
@property (readonly) NSCache *imageCache;
@property (readonly) NSCache *applicationCache;
@property (retain, nonatomic) NSDate *purgeApplicationCacheDate;

+ (id)systemImageNamedNumberAware:(id)a0;
+ (id)packageWithName:(id)a0;
+ (id)packageDescriptionWithName:(id)a0;
+ (id)goBackwardForTimeInterval:(double)a0;
+ (id)volumeTrackWithHeight:(double)a0;
+ (id)airPlayControlVideoForInterfaceStyle:(long long)a0;
+ (id)goForwardForTimeInterval:(double)a0;
+ (id)volumeThumbWithSize:(double)a0;
+ (id)airPlayControlAudioForInterfaceStyle:(long long)a0;
+ (id)mapImageNameNumberAware:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (id)applicationIconForBundleIdentifier:(id)a0;
- (void)imageForURL:(id)a0 completion:(id /* block */)a1;

@end
