@class NSURL, NSDictionary;

@interface PKPaymentRemoteAssetDownloadRecord : PKPaymentBackgroundDownloadRecord <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *passURL;
@property (retain, nonatomic) NSDictionary *remoteAssetsByTaskIdentifier;
@property (retain, nonatomic) NSDictionary *remoteAssetsByRecordName;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)setRemoteURLAsset:(id)a0 forTaskIdentifier:(id)a1;
- (void)setRemoteCloudStoreAsset:(id)a0 forRecordName:(id)a1;
- (void)removeRemoteURLAssetForTaskIdentifier:(id)a0;
- (BOOL)hasOutstandingRemoteAssetTasks;
- (void)removeRemoteCloudStoreAssetForRecordName:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
