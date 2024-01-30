@class NSString, PLPhotoLibrary, NSError, NSObject, NSManagedObjectID;
@protocol OS_dispatch_queue;

@interface PLAssetResourceDownloadRequest : NSOperation {
    NSObject<OS_dispatch_queue> *_queue;
    PLPhotoLibrary *_library;
    id /* block */ _progressHandler;
    NSString *_assetUUID;
}

@property (readonly, nonatomic) int requestID;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (readonly, nonatomic) unsigned long long cloudResourceType;
@property (readonly, nonatomic) NSString *cplTaskIdentifier;
@property (readonly, nonatomic) NSError *error;

- (void)_onQueueAsync:(id /* block */)a0;
- (void)main;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithRequestID:(int)a0 library:(id)a1 queue:(id)a2 cloudResourceType:(unsigned long long)a3 managedObjectID:(id)a4 progressHandler:(id /* block */)a5;

@end
