@class NSArray;

@interface RadioArtworkCollection : NSObject <NSCopying>

@property (readonly, nonatomic) NSArray *artworks;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)bestArtworkForPixelSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithArtworkVariants:(id)a0;
- (id)initWithArtworks:(id)a0;
- (id)bestArtworkForPointSize:(struct CGSize { double x0; double x1; })a0;
- (id)_artworksBySortingArtworks:(id)a0;

@end
