@class NSString;

@interface PXImportImageCacheIdentifier : NSObject

@property (copy, nonatomic) NSString *assetUuid;
@property (nonatomic) unsigned long long sizeType;
@property (nonatomic) long long cacheIndex;

- (void).cxx_destruct;

@end
