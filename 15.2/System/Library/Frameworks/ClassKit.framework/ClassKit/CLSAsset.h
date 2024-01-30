@class NSMetadataQuery, NSString, NSURL, NSError, NSSet, NSOperationQueue, NSMutableArray, NSProgress;

@interface CLSAsset : CLSObject <CLSRelationable, NSFilePresenter> {
    NSURL *_url;
    BOOL _uploaded;
    unsigned long long _uploadState;
    BOOL _observingUploadProgress;
    NSMutableArray *_uploadObservers;
    long long _totalUnitCount;
    long long _completedUnitCount;
    NSError *_sharingError;
    NSMetadataQuery *_query;
    id _uploadProgressSubscriber;
    NSProgress *_uploadProgress;
    BOOL _addedToFilePresenter;
    BOOL _setupCKShare;
    long long _schoolworkSyncStatus;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double fractionUploaded;
@property (readonly, nonatomic) NSError *uploadError;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSString *ownerPersonID;
@property (retain, nonatomic) NSString *brItemID;
@property (retain, nonatomic) NSString *brOwnerName;
@property (retain, nonatomic) NSString *brZoneName;
@property (retain, nonatomic) NSString *brShareName;
@property (retain, nonatomic) NSString *ubiquitousContainerName;
@property (retain, nonatomic) NSString *relativePathWithinContainer;
@property (nonatomic, getter=isUploaded) BOOL uploaded;
@property (nonatomic, getter=isOriginal) BOOL original;
@property (readonly, nonatomic) long long fileSize;
@property (retain, nonatomic) NSURL *devModeURL;
@property (nonatomic) long long schoolworkSyncStatus;
@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) NSString *filenameExtension;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)relations;

- (id)initWithURL:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)presentedItemDidChangeUbiquityAttributes:(id)a0;
- (id)initWithFileURL:(id)a0;
- (BOOL)deleteFile:(id *)a0;
- (void)mergeWithObject:(id)a0;
- (void).cxx_destruct;
- (id)_init;
- (id)initWithCoder:(id)a0;
- (void)addUploadObserver:(id)a0;
- (void)removeUploadObserver:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)validateObject:(id *)a0;
- (void)willSaveObject;
- (void)createShareIfNeeded:(id /* block */)a0;
- (void)urlSuitableForOpeningWithCompletion:(id /* block */)a0;
- (id)_initWithFileURL:(id)a0;
- (id)initWithFileURL:(id)a0 withOwnerPersonID:(id)a1;
- (BOOL)devModeOn;
- (id)fileURL_deprecated;
- (void)uploadStateChanged:(unsigned long long)a0;
- (id)uploadObservers;
- (void)removeFromFilePresenter;
- (void)queued_startObservingUploadProgress;
- (void)queued_notifyUploadProgress;
- (void)queued_stopObservingUploadProgress;
- (void)queued_notifyUploadCompletion;
- (void)addToFilePresenter;
- (void)createShareIfNeeded_Imp:(id /* block */)a0;
- (void)deleteFileWithCompletion:(id /* block */)a0;
- (id)uploadFileIfNeeded:(id *)a0;
- (void)checkForCKShare:(id /* block */)a0;

@end
