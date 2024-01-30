@class NSURL, NSFileManager, NSObject;
@protocol OS_dispatch_queue;

@interface PUReviewFileManager : NSObject

@property (readonly, nonatomic) NSFileManager *_fileManager;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_fileManagementQueue;
@property (readonly, nonatomic) NSURL *_safePathURL;

+ (id)defaultManager;

- (BOOL)removeItemAtURL:(id)a0 error:(id *)a1;
- (id)initWithFileManager:(id)a0;
- (void).cxx_destruct;
- (void)removeItemAtURL:(id)a0 completion:(id /* block */)a1;
- (BOOL)_allowedToDeleteItemAtURL:(id)a0;
- (BOOL)_removeItemAtURL:(id)a0 error:(id *)a1 stackshot:(id)a2;

@end
