@class NSString, NSArray, NSBundle, NSNumber, TTSAssetSource;

@interface TTSAsset.TTSAssetTrialAsset : TTSAsset {
    void /* unknown type, empty encoding */ assetAttr;
    void /* unknown type, empty encoding */ asset;
    void /* unknown type, empty encoding */ isDownloading;
    void /* unknown type, empty encoding */ downloadToken;
}

@property (nonatomic, readonly) TTSAssetSource *assetSource;
@property (nonatomic, readonly) long long versionNumber;
@property (nonatomic, readonly) NSString *versionDescription;
@property (nonatomic, readonly) NSNumber *diskSize;
@property (nonatomic, readonly) NSArray *supportedLanguages;
@property (nonatomic, readonly) NSBundle *bundle;
@property (nonatomic, readonly) BOOL downloading;
@property (nonatomic, readonly) BOOL purgeable;
@property (nonatomic, readonly) BOOL locallyAvailable;

- (void)purge;
- (void).cxx_destruct;
- (id)init;
- (void)cancelDownloadingThen:(id /* block */)a0;
- (void)downloadWithReservation:(id)a0 useBattery:(BOOL)a1 progress:(id /* block */)a2 then:(id /* block */)a3;

@end
