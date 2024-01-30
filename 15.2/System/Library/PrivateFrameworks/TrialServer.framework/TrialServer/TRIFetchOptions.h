@class NSNumber, TRIDownloadOptions;

@interface TRIFetchOptions : NSObject <NSCopying>

@property (readonly, nonatomic) TRIDownloadOptions *downloadOptions;
@property (readonly, nonatomic) NSNumber *cacheDeleteAvailableSpaceClass;

+ (id)optionsWithDownloadOptions:(id)a0 cacheDeleteAvailableSpaceClass:(id)a1;

- (id)initWithDownloadOptions:(id)a0 cacheDeleteAvailableSpaceClass:(id)a1;
- (id)copyWithReplacementCacheDeleteAvailableSpaceClass:(id)a0;
- (BOOL)isEqualToOptions:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithReplacementDownloadOptions:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
