@class NSString, PFUbiquityLocation, NSError, NSObject;
@protocol OS_dispatch_semaphore;

@interface PFUbiquitySafeSaveFile : NSObject {
    NSObject<OS_dispatch_semaphore> *_safeSaveSemaphore;
}

@property (readonly, nonatomic) PFUbiquityLocation *permanentLocation;
@property (readonly, nonatomic) PFUbiquityLocation *safeSaveLocation;
@property (retain, nonatomic) PFUbiquityLocation *currentLocation;
@property (readonly, nonatomic) NSString *localPeerID;
@property (readonly, nonatomic) NSError *safeSaveError;
@property (readonly, nonatomic) BOOL isRegistered;
@property (readonly, nonatomic) BOOL continueCheckingUpload;
@property (readonly, nonatomic) BOOL safeSaveSuccess;
@property (readonly, nonatomic) BOOL moveAfterSave;
@property (readonly, nonatomic) BOOL existsAtSafeSaveLocation;
@property (readonly, nonatomic) BOOL existsAtPermanentLocation;
@property (readonly, nonatomic) BOOL existsInCloud;
@property (readonly, nonatomic) BOOL downloadSuccess;
@property (readonly, nonatomic) BOOL continueCheckingDownload;
@property (readonly, nonatomic) NSError *downloadError;

- (id)init;
- (void)dealloc;
- (BOOL)writeFile:(id *)a0;
- (BOOL)removeFile:(id *)a0;
- (id)description;
- (BOOL)loadFile:(id *)a0;
- (void)checkFileDownload;
- (void)checkSafeSaveFileUpload;
- (id)initWithPermanentLocation:(id)a0 safeSaveLocation:(id)a1 andLocalPeerID:(id)a2;
- (BOOL)downloadLatestVersion:(BOOL)a0 error:(id *)a1;
- (BOOL)moveToPermanentLocation:(id *)a0;
- (BOOL)loadFileFromLocation:(id)a0 error:(id *)a1;
- (BOOL)writeFileToLocation:(id)a0 error:(id *)a1;
- (BOOL)safeSaveFile:(BOOL)a0 moveToPermanentLocation:(BOOL)a1 error:(id *)a2;
- (BOOL)waitForFileToUpload:(id *)a0;
- (BOOL)isFileUploaded:(id *)a0;
- (BOOL)removeFileFromLocation:(id)a0 error:(id *)a1;
- (BOOL)isFileDownloaded:(id *)a0;
- (BOOL)waitForFileToDownload:(id *)a0;
- (void)checkSafeSaveFileUploadAsync;
- (void)setSafeSaveSuccess:(BOOL)a0;
- (void)safeSaveFinishedUpload;
- (void)setSafeSaveError:(id)a0;
- (void)setDownloadSuccess:(BOOL)a0;
- (void)downloadFinished;
- (void)setDownloadError:(id)a0;

@end
