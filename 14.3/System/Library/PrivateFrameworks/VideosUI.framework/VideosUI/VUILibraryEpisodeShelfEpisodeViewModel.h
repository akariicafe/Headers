@class VUIMediaItem, NSObject;
@protocol VUIMediaEntityAssetController;

@interface VUILibraryEpisodeShelfEpisodeViewModel : NSObject

@property (retain, nonatomic) VUIMediaItem *episode;
@property (retain, nonatomic) NSObject<VUIMediaEntityAssetController> *assetController;

- (void).cxx_destruct;

@end
