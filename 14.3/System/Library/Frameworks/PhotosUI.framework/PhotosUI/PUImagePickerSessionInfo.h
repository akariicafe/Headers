@class NSString;

@interface PUImagePickerSessionInfo : PUSessionInfo {
    BOOL _isLimitedLibraryPicker;
    unsigned long long _selectionLimit;
}

@property (nonatomic) BOOL showsPrompt;
@property (copy, nonatomic) NSString *staticPrompt;

- (BOOL)isLimitedLibraryPicker;
- (void).cxx_destruct;
- (unsigned long long)selectionLimit;
- (id)initWithPhotoSelectionManager:(id)a0;
- (id)initWithPhotosViewDelegate:(id)a0 loadingStatusManager:(id)a1 allowMultipleSelection:(BOOL)a2 limitedLibrary:(BOOL)a3;
- (void)setSelectionLimit:(unsigned long long)a0;
- (BOOL)isForAssetPicker;
- (id)localizedPrompt;
- (BOOL)isSelectingAssets;

@end
