@class PFCanceler, PHImportAsset;

@interface PHImportAssetDataRequest : NSObject {
    PFCanceler *_canceler;
}

@property (copy, nonatomic) id /* block */ cancelBlock;
@property (retain, nonatomic) PHImportAsset *asset;
@property (readonly, nonatomic) PHImportAsset *requestAsset;

- (void)cancel;
- (BOOL)isCanceled;
- (void).cxx_destruct;
- (id)initWithAsset:(id)a0;

@end
