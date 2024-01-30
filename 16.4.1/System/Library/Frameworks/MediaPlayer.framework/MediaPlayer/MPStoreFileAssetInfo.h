@class NSString, NSArray, NSURL, NSData, ICStoreFileAssetInfo;

@interface MPStoreFileAssetInfo : NSObject {
    ICStoreFileAssetInfo *_internalInfo;
}

@property (readonly, copy, nonatomic) NSURL *assetURL;
@property (readonly, copy, nonatomic) NSString *downloadKey;
@property (readonly, copy, nonatomic) NSArray *fairPlayInfoList;
@property (readonly, nonatomic) long long flavorType;
@property (readonly, copy, nonatomic) NSString *fileExtension;
@property (readonly, nonatomic) unsigned long long fileSize;
@property (readonly, copy, nonatomic) NSData *md5;
@property (readonly, nonatomic) long long protectionType;
@property (readonly, copy, nonatomic) NSString *playbackAuthorizationToken;

- (void).cxx_destruct;
- (id)initWithiTunesCloudStoreFileAssetInfo:(id)a0;

@end
