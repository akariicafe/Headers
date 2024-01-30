@class MKArtworkDataSourceCache, NSString;
@protocol GEOTransitArtworkDataSource;

@interface MKSizedTransitArtwork : NSObject <MKArtworkImageSource>

@property (readonly, nonatomic) id<GEOTransitArtworkDataSource> artwork;
@property (readonly, nonatomic) long long shieldSize;
@property (retain, nonatomic) MKArtworkDataSourceCache *artworkCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)imageToDisplayWithScreenScale:(double)a0 nightMode:(BOOL)a1;
- (id)badgeImageToDisplayWithScreenScale:(double)a0 nightMode:(BOOL)a1;
- (id)initWithArtwork:(id)a0 shieldSize:(long long)a1 artworkCache:(id)a2;
- (BOOL)isEqualToTransitArtworkViewMode:(id)a0;
- (id)initWithArtwork:(id)a0 shieldSize:(long long)a1;

@end
