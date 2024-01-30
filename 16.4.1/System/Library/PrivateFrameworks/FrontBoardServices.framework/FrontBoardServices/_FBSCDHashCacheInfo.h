@class NSData;

@interface _FBSCDHashCacheInfo : NSObject

@property (readonly, nonatomic) NSData *cachedCodeDirectoryHash;
@property (readonly, nonatomic) unsigned int cachedCodeDirectoryHashType;

+ (id)cacheInfoWithData:(id)a0 hashType:(unsigned int)a1;

- (void).cxx_destruct;

@end
