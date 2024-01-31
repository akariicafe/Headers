@interface ContactsUI.CNPosterPreviewViewConfiguration : NSObject {
    void /* unknown type, empty encoding */ posterArchiveData;
    void /* unknown type, empty encoding */ posterConfiguration;
    void /* unknown type, empty encoding */ displayName;
    void /* unknown type, empty encoding */ photoAssetID;
    void /* unknown type, empty encoding */ backgroundColor;
    void /* unknown type, empty encoding */ isEditingSNaP;
    void /* unknown type, empty encoding */ monogramText;
}

@property (nonatomic, readonly) BOOL hasExistingPoster;

+ (id)configurationForExistingPosterConfiguration:(id)a0 displayName:(id)a1;
+ (id)configurationForNewPosterWithPhotoAssetID:(id)a0 backgroundColor:(id)a1 displayName:(id)a2 isEditingSNaP:(BOOL)a3;
+ (id)configurationForNewPosterWithPhotoAssetID:(id)a0 backgroundColor:(id)a1 displayName:(id)a2 isEditingSNaP:(BOOL)a3 monogramText:(id)a4;
+ (id)configurationForPosterArchiveData:(id)a0 displayName:(id)a1;

- (id)init;
- (void).cxx_destruct;

@end
