@interface MRNowPlayingArtwork : NSObject

@property (readonly, nonatomic) unsigned int type;
@property (readonly, nonatomic) BOOL hasArtworkData;

- (id)copyImageData;

@end
