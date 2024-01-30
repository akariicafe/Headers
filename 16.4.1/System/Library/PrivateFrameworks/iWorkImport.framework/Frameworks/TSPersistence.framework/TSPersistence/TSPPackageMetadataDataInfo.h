@class NSString, TSPDigest, NSNumber;
@protocol TSPCryptoInfo;

@interface TSPPackageMetadataDataInfo : NSObject

@property (readonly, nonatomic) long long identifier;
@property (readonly, nonatomic) TSPDigest *digest;
@property (readonly, nonatomic) NSString *preferredFilename;
@property (readonly, nonatomic) NSString *filename;
@property (readonly, nonatomic) NSNumber *materializedLength;
@property (readonly, nonatomic) BOOL isUnmaterializedRemoteData;
@property (readonly, nonatomic) id<TSPCryptoInfo> decryptionInfo;

- (void).cxx_destruct;
- (id)initWithDataInfo:(const void *)a0 decryptionKey:(id)a1;
- (id)dataStorageWithPackage:(id)a0 documentURL:(id)a1;

@end
