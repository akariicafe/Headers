@class NSFileVersion, NSString, NSSet, NSURL, NSDate, NSOperationQueue;

@interface GKSavedGameDocument : NSObject <NSFilePresenter>

@property (retain, nonatomic) NSString *deviceName;
@property (retain, nonatomic) NSDate *modificationDate;
@property (retain, nonatomic) NSURL *fileURL;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSFileVersion *fileVersion;
@property (nonatomic) BOOL hasConflict;
@property (nonatomic) BOOL isConflictVersion;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)currentDeviceName;

- (void)setMetadata:(id)a0;
- (void)presentedItemDidResolveConflictVersion:(id)a0;
- (void)dealloc;
- (id)metadata;
- (void)updateMetadata;
- (id)initWithFileURL:(id)a0;
- (void)presentedItemDidGainVersion:(id)a0;
- (void)presentedItemDidLoseVersion:(id)a0;
- (void)presentedItemDidChange;
- (void)loadDataWithCompletionHandler:(id /* block */)a0;
- (void)saveData:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteAllVersionsIncludingCurrent:(BOOL)a0 withCompletionHandler:(id /* block */)a1;
- (void)loadMetadataWithCompletionHandler:(id /* block */)a0;
- (void)updateConflictStateWithCompletionHandler:(id /* block */)a0;
- (void)deleteConflictVersion:(id)a0 completionHandler:(id /* block */)a1;
- (void)loadWrapperDataWithFilename:(id)a0 completionHandler:(id /* block */)a1;

@end
