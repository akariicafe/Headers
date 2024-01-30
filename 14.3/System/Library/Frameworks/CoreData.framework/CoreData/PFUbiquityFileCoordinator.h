@class NSString;

@interface PFUbiquityFileCoordinator : NSFileCoordinator

@property (readonly, nonatomic) NSString *localPeerID;

+ (id)newFileCoordinatorForUbiquitousExternalDataReferenceLocation:(id)a0;
+ (id)newFileCoordinatorForUbiquityRootLocation:(id)a0 andLocalPeerID:(id)a1;
+ (id)newFileCoordinatorForUbiquityRootLocation:(id)a0;

- (id)initWithFilePresenter:(id)a0;
- (void)dealloc;
- (BOOL)coordinateReadingItemAtLocation:(id)a0 options:(unsigned long long)a1 retryOnError:(BOOL)a2 error:(id *)a3 byAccessor:(id /* block */)a4;
- (BOOL)shouldRetryForError:(id)a0 ignoreFile:(BOOL *)a1;

@end
