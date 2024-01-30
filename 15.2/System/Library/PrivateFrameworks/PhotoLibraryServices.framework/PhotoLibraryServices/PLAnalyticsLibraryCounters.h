@interface PLAnalyticsLibraryCounters : NSObject {
    _Atomic unsigned long long assetCount;
    _Atomic unsigned long long resourceCount;
    _Atomic unsigned long long trashedAssetCount;
    _Atomic unsigned long long photosCount;
    _Atomic unsigned long long livePhotosCount;
    _Atomic unsigned long long videosCount;
    _Atomic unsigned long long otherMediaCount;
    _Atomic unsigned long long otherImagesCount;
    _Atomic unsigned long long jpegCount;
    _Atomic unsigned long long rawCount;
    _Atomic unsigned long long heifCount;
    _Atomic unsigned long long isActive;
    _Atomic unsigned long long camera;
    _Atomic unsigned long long importedByAssetCount;
    _Atomic unsigned long long favoriteCount;
    _Atomic unsigned long long junkCount;
    _Atomic unsigned long long screenshotCount;
    _Atomic unsigned long long portraitCount;
    _Atomic unsigned long long adjustedCount;
    _Atomic unsigned long long addedInLast30Days;
    _Atomic unsigned long long originalOnTopAssetCount;
    _Atomic unsigned long long assetsWithFacesCount;
    _Atomic unsigned long long assetsWithOCRCount;
    _Atomic unsigned long long assetsWithOCROrFacesCount;
    _Atomic unsigned long long assetsWithTorsoOnlyFacesCount;
    _Atomic unsigned long long faceCount;
    _Atomic unsigned long long savedFromMessagesCount;
    _Atomic unsigned long long savedFromPhotosCount;
    _Atomic unsigned long long nonGuestSavedFromMessagesCount;
}

@end
