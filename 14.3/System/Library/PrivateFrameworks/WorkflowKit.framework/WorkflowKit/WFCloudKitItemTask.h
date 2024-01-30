@class NSOperationQueue, CKOperation, NSError;

@interface WFCloudKitItemTask : WFCloudKitTask

@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) CKOperation *cloudOperation;
@property (retain, nonatomic) NSError *error;

- (void)cancel;
- (id)init;
- (void).cxx_destruct;

@end
