@class NSMutableDictionary;

@interface PXDisplayAssetCountsByPlaybackStyle : NSObject <NSCopying> {
    NSMutableDictionary *_countsByPlaybackStyle;
}

@property (readonly, nonatomic) long long totalCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (void)addPlaybackStyle:(long long)a0;
- (long long)countForPlaybackStyle:(long long)a0;
- (void)enumerateCountsUsingBlock:(id /* block */)a0;
- (id)initWithAssetFetchResult:(id)a0;
- (id)initWithCountsByPlaybackStyle:(id)a0;
- (void)setCount:(long long)a0 forPlaybackStyle:(long long)a1;

@end
