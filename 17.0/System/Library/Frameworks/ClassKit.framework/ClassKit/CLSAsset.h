@class NSString, NSURL, NSError, NSMutableSet;

@interface CLSAsset : CLSAbstractAsset <CLSRelationable, CLSAssetUploadProgressNotifiable, CLSAssetUploadObservable> {
    BOOL _uploaded;
    BOOL _uploadRequested;
    NSMutableSet *_uploadObservers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isUploaded) BOOL uploaded;
@property (nonatomic) double fractionUploaded;
@property (copy, nonatomic) NSError *uploadError;
@property (retain, nonatomic) NSURL *devModeURL;
@property (nonatomic, getter=isStaged) BOOL staged;
@property (copy, nonatomic) NSURL *thumbnailURL;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long displayOrder;
@property (nonatomic) double durationInSeconds;
@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)relations;

- (id)initWithFileURL:(id)a0;
- (id)_init;
- (BOOL)deleteFile:(id *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)URL;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeWithObject:(id)a0;
- (void)addUploadObserver:(id)a0;
- (void)removeUploadObserver:(id)a0;
- (BOOL)validateObject:(id *)a0;
- (id)initWithURL:(id)a0 ownerPersonID:(id)a1 type:(long long)a2;
- (id)uploadObservers;
- (void)checkForCKShare:(id /* block */)a0;
- (oneway void)clientRemote_invalidate;
- (oneway void)clientRemote_uploadCompleted:(BOOL)a0 url:(id)a1 thumbnailURL:(id)a2 relativePathWithinContainer:(id)a3 ubiquitousContainerName:(id)a4 brItemID:(id)a5 brOwnerName:(id)a6 brZoneName:(id)a7 brShareName:(id)a8 fractionUploaded:(double)a9 isTemporary:(BOOL)a10 isStaged:(BOOL)a11 error:(id)a12;
- (oneway void)clientRemote_uploadProgressFraction:(double)a0 error:(id)a1;
- (void)createShareIfNeeded:(id /* block */)a0;
- (void)createShareIfNeeded_Imp:(id /* block */)a0;
- (void)deleteFileWithCompletion:(id /* block */)a0;
- (id)initWithFileURL:(id)a0 withOwnerPersonID:(id)a1;
- (void)queued_notifyUploadCompletion;
- (void)queued_notifyUploadProgress;
- (BOOL)queued_uploadFileIfNeeded:(id *)a0;
- (id)uploadFileIfNeeded:(id *)a0;
- (void)urlSuitableForOpeningWithCompletion:(id /* block */)a0;
- (void)urlSuitableForStreamingWithCompletion:(id /* block */)a0;
- (void)willSaveObject;

@end
