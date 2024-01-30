@class NSMutableArray, NSArray, NSDate, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface SKUIMediaSocialAdminPermissionsCoordinator : NSObject {
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSArray *_lastKnownAuthors;
    NSDate *_lastRequestDate;
    NSMutableArray *_resultBlocks;
}

@property (readonly, copy) NSNumber *lastKnownAdminStatus;
@property (readonly, copy) NSArray *lastKnownAuthors;

+ (id)sharedCoordinator;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)getAdminStatusWithOptions:(id)a0 resultBlock:(id /* block */)a1;
- (void)_authenticateOnCompletion:(id /* block */)a0;
- (void)_fireResultsBlocksWithAuthors:(id)a0 error:(id)a1;
- (void)_getAuthors;
- (void)_handleOperationResponseWithAuthors:(id)a0 error:(id)a1;
- (void)_queueResultBlock:(id /* block */)a0;
- (void)getAuthorsAndWaitWithOptions:(id)a0 authorsBlock:(id /* block */)a1;
- (void)getAuthorsWithOptions:(id)a0 authorsBlock:(id /* block */)a1;

@end
