@class NSMutableDictionary, PHFetchResult, IMMessageItem, NSURL, NSDictionary, IMDChat, PHMomentShare;

@interface IMDMomentShareIngestionContext : NSObject {
    NSMutableDictionary *_assetUUIDsToFileTransfers;
}

@property (readonly, nonatomic) NSURL *shareURL;
@property (readonly, nonatomic) IMMessageItem *message;
@property (readonly, nonatomic) IMDChat *chat;
@property (retain, nonatomic) PHMomentShare *momentShare;
@property (retain, nonatomic) PHFetchResult *assetsFetch;
@property (nonatomic) long long fetchType;
@property (nonatomic) long long state;
@property (readonly, nonatomic) NSDictionary *assetUUIDsToFileTransfers;

- (void).cxx_destruct;
- (void)addTransfers:(id)a0;
- (void)clearAllTransfers;
- (void)completeTransferForAssetUUID:(id)a0;
- (id)initWithURL:(id)a0 message:(id)a1 inChat:(id)a2;

@end
