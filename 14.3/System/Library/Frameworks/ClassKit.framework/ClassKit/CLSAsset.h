@class NSString, NSURL, NSError, NSMutableArray, NSMetadataQuery;

@interface CLSAsset : CLSObject <CLSRelationable> {
    NSURL *_url;
    BOOL _uploaded;
    unsigned long long _uploadState;
    BOOL _observingUploadProgress;
    NSMutableArray *_uploadObservers;
    long long _totalUnitCount;
    long long _completedUnitCount;
    NSError *_sharingError;
    NSMetadataQuery *_query;
    BOOL _setupCKShare;
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
@property (readonly, nonatomic) NSURL *fileURL;

+ (id)relations;
+ (BOOL)supportsSecureCoding;

- (void)mergeWithObject:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0;
- (id)initWithFileURL:(id)a0;
- (id)_init;
- (void)addUploadObserver:(id)a0;
- (void)removeUploadObserver:(id)a0;
- (BOOL)deleteFile:(id *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)validateObject:(id *)a0;
- (void)willSaveObject;
- (void)createShareIfNeeded:(id /* block */)a0;
- (void)urlSuitableForOpeningWithCompletion:(id /* block */)a0;
- (id)_initWithFileURL:(id)a0;
- (id)initWithFileURL:(id)a0 withOwnerPersonID:(id)a1;
- (void)uploadStateChanged:(unsigned long long)a0;
- (id)uploadObservers;
- (void)queued_startObservingUploadProgress;
- (void)queued_notifyUploadProgress;
- (void)queued_stopObservingUploadProgress;
- (void)queued_notifyUploadCompletion;
- (void)queryGatheredData:(id)a0;
- (void)queryUpdated:(id)a0;
- (void)processItems:(id)a0;
- (void)createShareIfNeeded_Imp:(id /* block */)a0;
- (void)fetchUsersAndAddToShare:(id)a0 completion:(id /* block */)a1;
- (BOOL)deleteFileAtURL:(id)a0 error:(id *)a1;
- (void)deleteFileWithCompletion:(id /* block */)a0;
- (id)uploadFileIfNeeded:(id *)a0;

@end
