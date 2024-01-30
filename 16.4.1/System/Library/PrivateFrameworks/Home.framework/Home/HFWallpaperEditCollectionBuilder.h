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
- (id)commitWallpaper;
- (id)initWithHomeKitObject:(id)a0;
- (void)setWallpaper:(id)a0 image:(id)a1;
- (id)wallpaperEditCollectionFuture;
- (id)editCollectionForWallpaper:(id)a0 image:(id)a1;
- (id)initWithHomeKitObject:(id)a0 namedWallpaperCollectionType:(long long)a1;

@end
