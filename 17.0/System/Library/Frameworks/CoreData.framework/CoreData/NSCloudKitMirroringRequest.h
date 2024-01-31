@class NSUUID, NSCloudKitMirroringRequestOptions, CKSchedulerActivity, NSMutableArray;

@interface NSCloudKitMirroringRequest : NSPersistentStoreRequest {
    BOOL _deferredByBackgroundTimeout;
    NSMutableArray *_containerBlocks;
    BOOL _isContainerRequest;
    CKSchedulerActivity *_activity;
}

@property (readonly, nonatomic) NSUUID *requestIdentifier;
@property (readonly, copy, nonatomic) NSCloudKitMirroringRequestOptions *options;
@property (readonly, copy, nonatomic) id /* block */ requestCompletionBlock;

+ (id)allRequestClasses;

- (void)dealloc;
- (BOOL)validateForUseWithStore:(id)a0 error:(id *)a1;
- (unsigned long long)requestType;
- (id)description;
- (id)initWithOptions:(id)a0 completionBlock:(id /* block */)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithActivity:(id)a0 options:(id)a1 completionBlock:(id /* block */)a2;

@end
