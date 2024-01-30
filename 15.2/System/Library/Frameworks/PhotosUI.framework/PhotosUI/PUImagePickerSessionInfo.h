@class NSString;

@interface PUImagePickerSessionInfo : PUSessionInfo {
    BOOL _isLimitedLibraryPicker;
    unsigned long long _selectionLimit;
}

@property (nonatomic) BOOL showsPrompt;
@property (copy, nonatomic) NSString *staticPrompt;

- (BOOL)isForAssetPicker;
- (BOOL)isLimitedLibraryPicker;
- (void).cxx_destruct;
- (id)localizedPrompt;
- (BOOL)isSelectingAssets;
- (unsigned long long)selectionLimit;
- (void)setSelectionLimit:(unsigned long long)a0;
- (id)initWithPhotoSelectionManager:(id)a0;
- (id)initWithPhotosViewDelegate:(id)a0 loadingStatusManager:(id)a1 allowMultipleSelection:(BOOL)a2 limitedLibrary:(BOOL)a3;

@end
