@class CKContainer, NSObject;
@protocol OS_dispatch_queue;

@interface CKSystemSharingUIObserver : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly, nonatomic) CKContainer *container;
@property (copy) id /* block */ systemSharingUIDidSaveShareBlock;
@property (copy) id /* block */ systemSharingUIDidStopSharingBlock;

+ (void)initialize;

- (id)initWithContainer:(id)a0;
- (void)handleSharingUIUpdatedShare:(id)a0 recordID:(id)a1 isDeleted:(BOOL)a2 error:(id)a3;
- (void)_locked_handleSharingUIUpdatedShare:(id)a0 recordID:(id)a1 isDeleted:(BOOL)a2 error:(id)a3;
- (void).cxx_destruct;

@end
