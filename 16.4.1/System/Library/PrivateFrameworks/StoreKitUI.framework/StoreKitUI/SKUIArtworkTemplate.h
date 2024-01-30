@class NSString, NSMutableDictionary, NSMutableSet, SKUIArtwork;

@interface SKUIArtworkTemplate : NSObject <SKUIArtworkProviding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long height;
@property (readonly, nonatomic) long long width;
@property (readonly, nonatomic) NSString *urlTemplateString;
@property (readonly, nonatomic) NSMutableSet *servedArtworks;
@property (readonly, nonatomic) SKUIArtwork *largestArtwork;
@property (readonly, nonatomic) SKUIArtwork *smallestArtwork;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSMutableDictionary *cacheRepresentation;

+ (BOOL)canHandleArtworkFormat:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasArtwork;
- (id)_lookupDictionary;
- (id)initWithCacheRepresentation:(id)a0;
- (id)artworkURLForSize:(long long)a0;
- (id)artworkForSize:(long long)a0;
- (id)_artworkURLWithWidth:(long long)a0;
- (id)_artworkWithWidth:(long long)a0;
- (struct CGSize { double x0; double x1; })_sizeForWidth:(long long)a0;
- (id)_urlStringWithTargetSize:(struct CGSize { double x0; double x1; })a0;
- (id)artworkWithWidth:(long long)a0;
- (id)bestArtworkForScaledSize:(struct CGSize { double x0; double x1; })a0;
- (id)bestArtworkForSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithTemplateDictionary:(id)a0;
- (id)preferredExactArtworkForSize:(struct CGSize { double x0; double x1; })a0;

@end
