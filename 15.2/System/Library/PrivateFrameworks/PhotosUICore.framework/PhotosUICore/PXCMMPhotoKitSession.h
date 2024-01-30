@class PXPhotoKitImportStatusManager, NSString, PHSuggestion, PXPhotoKitMomentShareStatus, PXPhotoKitAssetsDataSourceManager, PHAsset, PHMomentShare;

@interface PXCMMPhotoKitSession : PXCMMSession {
    PXPhotoKitImportStatusManager *_importStatusManager;
    PXPhotoKitMomentShareStatus *_photoKitMomentShareStatus;
    NSString *_photoKitImportSessionID;
}

@property (readonly, nonatomic) PHMomentShare *momentShare;
@property (readonly, nonatomic) PHSuggestion *suggestion;
@property (readonly, nonatomic) PHMomentShare *originatingMomentShare;
@property (readonly, nonatomic) PXPhotoKitAssetsDataSourceManager *dataSourceManager;
@property (weak, nonatomic) PHAsset *anchorAsset;

- (id)importSessionID;
- (id)initWithContext:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)importStatusManager;
- (id)notificationSuppressionContexts;
- (id)momentShareStatus;
- (id)diagnosticDictionary;
- (id)initWithPhotoKitContext:(id)a0;

@end
