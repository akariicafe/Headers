@class PFCanceler, PHImportAsset;

@interface PHImportAssetDataRequest : NSObject {
    PFCanceler *_canceler;
}

@property (copy, nonatomic) id /* block */ cancelBlock;
@property (retain, nonatomic) PHImportAsset *asset;
@property (readonly, nonatomic) PHImportAsset *requestAsset;

- (id)initWithAsset:(id)a0;
- (BOOL)isCanceled;
- (void).cxx_destruct;
- (void)cancel;

@end
