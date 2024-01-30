@interface SUItemCellContext : SUArtworkCellContext {
    struct __CFDictionary { } *_cachedRatingImages;
    struct __CFDictionary { } *_stringSizes;
}

@property (nonatomic) struct { long long version; void /* function */ *retain; void /* function */ *release; void /* function */ *copyDescription; void /* function */ *equal; void /* function */ *hash; } stringSizeCacheKeyCallBacks;

- (id)init;
- (void)dealloc;
- (void)resetLayoutCaches;
- (id)ratingImageForRating:(float)a0 style:(long long)a1;
- (struct CGSize { double x0; double x1; })sizeForString:(id)a0 font:(id)a1 constrainedToSize:(struct CGSize { double x0; double x1; })a2;

@end
