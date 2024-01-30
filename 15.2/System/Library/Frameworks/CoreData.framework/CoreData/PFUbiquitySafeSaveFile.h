@class NSString, PFUbiquityLocation, NSError, NSObject;
@protocol OS_dispatch_semaphore;

@interface PFUbiquitySafeSaveFile : NSObject {
    PFUbiquityLocation *_permanentLocation;
    PFUbiquityLocation *_safeSaveLocation;
    PFUbiquityLocation *_currentLocation;
    NSString *_localPeerID;
    BOOL _continueCheckingDownload;
    BOOL _downloadSuccess;
    NSError *_downloadError;
    BOOL _continueCheckingUpload;
    BOOL _safeSaveSuccess;
    BOOL _moveAfterSave;
    NSError *_safeSaveError;
    NSObject<OS_dispatch_semaphore> *_safeSaveSemaphore;
    BOOL _isRegistered;
}

- (BOOL)moveToPermanentLocation:(id *)a0;
- (id)initWithPermanentLocation:(id)a0 safeSaveLocation:(id)a1 andLocalPeerID:(id)a2;
- (BOOL)loadFileFromLocation:(id)a0 error:(id *)a1;
- (BOOL)writeFileToLocation:(id)a0 error:(id *)a1;
- (BOOL)waitForFileToUpload:(id *)a0;
- (id)description;
- (id)init;
- (void)dealloc;

@end
