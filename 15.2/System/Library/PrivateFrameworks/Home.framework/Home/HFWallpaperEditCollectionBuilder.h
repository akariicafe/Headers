@class HFWallpaperEditCollection, NAFuture;
@protocol HFHomeKitObject, HMApplicationData;

@interface HFWallpaperEditCollectionBuilder : NSObject

@property (nonatomic) long long namedWallpaperCollectionType;
@property (nonatomic) BOOL hkObjectNewlyCreated;
@property (retain, nonatomic) NAFuture *initialEditCollectionFuture;
@property (retain, nonatomic) HFWallpaperEditCollection *updatedEditCollection;
@property (retain, nonatomic) id<HFHomeKitObject, HMApplicationData> hkObject;

- (id)description;
- (void).cxx_destruct;
- (id)editCollectionForWallpaper:(id)a0 image:(id)a1;
- (id)initWithHomeKitObject:(id)a0 namedWallpaperCollectionType:(long long)a1;
- (id)wallpaperEditCollectionFuture;
- (void)setWallpaper:(id)a0 image:(id)a1;
- (id)commitWallpaper;

@end
