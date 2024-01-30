@class NSURL, SUImageDataProvider;

@interface SUImageCacheKey : NSObject <NSCopying> {
    SUImageDataProvider *_dataProvider;
    NSURL *_url;
}

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;

@end
