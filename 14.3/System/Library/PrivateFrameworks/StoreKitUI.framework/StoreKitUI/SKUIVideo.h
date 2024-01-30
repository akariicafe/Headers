@class NSURL;
@protocol SKUIArtworkProviding;

@interface SKUIVideo : NSObject

@property (readonly, nonatomic) id<SKUIArtworkProviding> artworks;
@property (readonly, nonatomic) NSURL *URL;

- (void).cxx_destruct;
- (id)initWithVideoDictionary:(id)a0;

@end
