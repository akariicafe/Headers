@interface PhotosUIApps.PhotosDetailsTimeWidgetViewModel : PhotosUIApps.PhotosDetailsWidgetViewModel <PHPhotoLibraryChangeObserver> {
    void /* unknown type, empty encoding */ fileName;
    void /* unknown type, empty encoding */ isiCloudEnabled;
    void /* unknown type, empty encoding */ isSyndicatedGuestAsset;
    void /* unknown type, empty encoding */ preferredContentSize;
    void /* unknown type, empty encoding */ _cloudLocalState;
    void /* unknown type, empty encoding */ _date;
    void /* unknown type, empty encoding */ _timeZone;
}

- (void)photoLibraryDidChange:(id)a0;
- (void).cxx_destruct;
- (void)clipBoardChangedWithPasteboardNotification:(id)a0;

@end
