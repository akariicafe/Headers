@class NSArray, NSString, SKUIArtwork, NSMutableDictionary, NSMutableArray;

@interface SKUIArtworkList : NSObject <SKUIArtworkProviding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=_lookupArray) NSArray *_lookupArray;
@property (copy, nonatomic) NSMutableArray *artworks;
@property (readonly, nonatomic) SKUIArtwork *largestArtwork;
@property (readonly, nonatomic) SKUIArtwork *smallestArtwork;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSMutableDictionary *cacheRepresentation;

+ (id)artworkForSize:(long long)a0 artworkDictionaries:(id)a1;
+ (BOOL)canHandleArtworkFormat:(id)a0;

- (BOOL)hasArtwork;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCacheRepresentation:(id)a0;
- (id)artworkURLForSize:(long long)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)artworkForSize:(long long)a0;
- (id)bestArtworkForSize:(struct CGSize { double x0; double x1; })a0;
- (id)artworkWithWidth:(long long)a0;
- (id)bestArtworkForScaledSize:(struct CGSize { double x0; double x1; })a0;
- (id)preferredExactArtworkForSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithArtworkListArray:(id)a0;
- (id)initWithLookupArray:(id)a0;

@end
