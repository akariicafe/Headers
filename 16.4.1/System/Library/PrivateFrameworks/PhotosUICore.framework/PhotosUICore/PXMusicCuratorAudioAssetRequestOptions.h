@class NSDictionary;

@interface PXMusicCuratorAudioAssetRequestOptions : NSObject

@property (nonatomic) BOOL forceMetadataRefetch;
@property (readonly, nonatomic) NSDictionary *requestOptions;

@end
