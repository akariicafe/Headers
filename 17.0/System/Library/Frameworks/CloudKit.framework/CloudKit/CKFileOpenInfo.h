@class CKAssetDownloadStagingManager, NSString, NSFileHandle, NSNumber, CKAssetDownloadStagingInfo;

@interface CKFileOpenInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *UUID;
@property (readonly, copy, nonatomic) NSString *path;
@property (readonly, copy, nonatomic) NSNumber *deviceID;
@property (readonly, copy, nonatomic) NSNumber *fileID;
@property (readonly, copy, nonatomic) NSNumber *generationID;
@property (readonly, nonatomic) BOOL shouldReadRawEncryptedData;
@property (readonly, nonatomic) NSFileHandle *fileHandle;
@property (readonly, nonatomic) CKAssetDownloadStagingInfo *assetDownloadStagingInfo;
@property (weak) CKAssetDownloadStagingManager *assetDownloadStagingManager;

- (id)initWithPath:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)CKPropertiesDescription;
- (id)description;
- (void).cxx_destruct;
- (id)initWithUUID:(id)a0 path:(id)a1 deviceID:(id)a2 fileID:(id)a3 generationID:(id)a4 shouldReadRawEncryptedData:(BOOL)a5 fileHandle:(id)a6 assetDownloadStagingInfo:(id)a7;
- (id)initWithCoder:(id)a0;

@end
