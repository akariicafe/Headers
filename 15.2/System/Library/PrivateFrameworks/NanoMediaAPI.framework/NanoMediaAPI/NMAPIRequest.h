@class NSURL;

@interface NMAPIRequest : MPStoreModelRequest

@property (nonatomic) unsigned long long cachePolicy;
@property (retain, nonatomic) NSURL *cacheURL;

+ (id)allSupportedItemProperties;
+ (id)allSupportedSectionProperties;

- (id)urlComponentsWithStoreBagDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setDefaultMusicRequestProperties;
- (Class)responseParserClass;
- (id)newOperationWithResponseHandler:(id /* block */)a0;

@end
