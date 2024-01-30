@class NSDictionary, NSMutableDictionary;

@interface CACLanguageAssetManager : NSObject

@property (nonatomic) BOOL isRegisteredForCallback;
@property (retain, nonatomic) NSMutableDictionary *downloadProgressDictionary;
@property (retain, nonatomic) NSMutableDictionary *lastReportedProgressDictionary;
@property (retain, nonatomic) NSMutableDictionary *downloadErrorDictionary;
@property (retain, nonatomic) NSDictionary *cachedInstallationStatus;
@property (nonatomic) BOOL isInstallationStatusStale;
@property (retain, nonatomic) NSDictionary *downloadProgress;

+ (void)initialize;
+ (id)sharedManager;
+ (id)downloadedLocaleIdentifiers;
+ (id)downloadingLocaleIdentifiers;

- (void).cxx_destruct;
- (id)init;
- (void)markInstallationStatusStale;
- (id)installationStatus;
- (void)registerForCallback;
- (void)_downloadProgressCallback:(struct __CFDictionary { } *)a0;
- (id)supportedLocaleIdentifiers;
- (id)downloadProgressForLanguage:(id)a0;
- (void)_updateInstallationStatusFromDownloadStatus:(struct __CFDictionary { } *)a0;
- (void)_handleErrorInDownloadForLanguage:(id)a0;
- (void)_sendProgressNotificationIfNeededForLanguage:(id)a0;
- (void)startDownloadOfLanguage:(id)a0;
- (void)cancelDownloadOfLanguage:(id)a0;
- (id)purgeInstalledAsset;
- (unsigned long long)errorStatusForLanguage:(id)a0;

@end
