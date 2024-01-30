@class NSString, NSURL;

@interface PLPublishingMedia : NSObject

@property (retain, nonatomic) id asset;
@property (nonatomic) BOOL isVideo;
@property (retain, nonatomic) NSString *pathForVideoFile;
@property (retain, nonatomic) NSURL *assetURL;
@property (nonatomic) BOOL isHDVideo;
@property (nonatomic) double duration;

+ (BOOL)isValidPublishingMedia:(id)a0;

- (id)initWithAsset:(id)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)initWithManagedAsset:(id)a0;
- (id)initWithAVURLAsset:(id)a0;

@end
