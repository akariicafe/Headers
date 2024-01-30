@class NSManagedObjectContext, NSMutableDictionary, NSString, NSOperationQueue, ICManagedObjectContextChangeController, NSObject;
@protocol OS_dispatch_queue, ICThumbnailCaching;

@interface ICThumbnailService : NSObject <ICManagedObjectContextChangeControllerDelegate>

@property (class, readonly, nonatomic) ICThumbnailService *sharedThumbnailService;

@property (retain, nonatomic) ICManagedObjectContextChangeController *managedObjectChangeController;
@property (retain, nonatomic) NSMutableDictionary *callbacks;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *schedulingSerialQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundQueue;
@property (retain, nonatomic) NSOperationQueue *thumbnailGenerationQueue;
@property (readonly, nonatomic) NSManagedObjectContext *workerContext;
@property (readonly, nonatomic) NSManagedObjectContext *viewContext;
@property (readonly, nonatomic) id<ICThumbnailCaching> cache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)attachmentPreviewImagesDidUpdate:(id)a0;
- (id)initWithViewContext:(id)a0 workerContext:(id)a1;
- (id)managedObjectContextChangeController:(id)a0 managedObjectIDsToUpdateForUpdatedManagedObjects:(id)a1;
- (void)managedObjectContextChangeController:(id)a0 performUpdatesForManagedObjectIDs:(id)a1;
- (BOOL)managedObjectContextChangeControllerShouldUpdateImmediately:(id)a0;
- (void)processThumbnailDescriptionResult:(id)a0;
- (id)thumbnailGeneratorForConfiguration:(id)a0;
- (id)thumbnailWithConfiguration:(id)a0;
- (void)thumbnailWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)thumbnailsWithConfigurations:(id)a0 completion:(id /* block */)a1;

@end
