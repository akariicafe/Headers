@interface PUImagePickerSessionInfo : PUSessionInfo {
    BOOL _isLimitedLibraryPicker;
}

- (BOOL)isLimitedLibraryPicker;
- (id)initWithPhotosViewDelegate:(id)a0 loadingStatusManager:(id)a1 allowMultipleSelection:(BOOL)a2 limitedLibrary:(BOOL)a3;
- (BOOL)isForAssetPicker;
- (BOOL)isSelectingAssets;

@end
