@class NSError, PFUbiquityLocation;

@interface PFUbiquityLocationStatus : NSObject {
    unsigned long long _hash;
}

@property (readonly, nonatomic) BOOL isLive;
@property (readonly, nonatomic) BOOL isDeleted;
@property (readonly, nonatomic) BOOL isDownloaded;
@property (nonatomic) BOOL isDownloading;
@property (readonly, nonatomic) BOOL isUploaded;
@property (readonly, nonatomic) BOOL isUploading;
@property (readonly, nonatomic) BOOL isScheduled;
@property (readonly, nonatomic) BOOL isImported;
@property (readonly, nonatomic) BOOL isExported;
@property (readonly, nonatomic) BOOL isFailed;
@property (readonly, nonatomic) long long numBytes;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) PFUbiquityLocation *location;
@property (readonly, nonatomic) long long numNotifications;

- (id)init;
- (void)dealloc;
- (void)checkFileURLState;
- (void)logWasImported;
- (void)logWasScheduled;
- (void)logImportWasCancelled;
- (void)logWasExported;
- (void)encounteredError:(id)a0;
- (void)recoveredFromError;
- (unsigned long long)hash;
- (id)description;
- (id)initWithLocation:(id)a0;
- (void)statusDidChange;

@end
