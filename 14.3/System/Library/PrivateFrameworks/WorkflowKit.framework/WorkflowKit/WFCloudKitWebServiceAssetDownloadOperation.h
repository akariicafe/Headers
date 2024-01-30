@class NSURL, NSString;
@protocol WFCloudKitItem;

@interface WFCloudKitWebServiceAssetDownloadOperation : WFCloudKitAsyncOperation

@property (retain, nonatomic) NSURL *assetURL;
@property (weak, nonatomic) id<WFCloudKitItem> item;
@property (retain, nonatomic) NSString *key;

- (void).cxx_destruct;
- (void)start;
- (id)initWithAssetURL:(id)a0 item:(id)a1 key:(id)a2;

@end
