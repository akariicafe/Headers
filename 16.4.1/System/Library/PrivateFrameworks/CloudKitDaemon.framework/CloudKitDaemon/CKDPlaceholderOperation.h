@class NSObject, NSString, NSOperationQueue, NSDate, CKDContainer, CKDOperation;
@protocol OS_dispatch_group;

@interface CKDPlaceholderOperation : NSOperation {
    NSObject<OS_dispatch_group> *_group;
    int _executionState;
}

@property (retain, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) CKDOperation *realOperation;
@property (readonly, nonatomic) NSOperationQueue *targetOperationQueue;
@property (readonly, nonatomic) NSString *operationID;
@property (readonly, weak, nonatomic) CKDContainer *container;

- (void)transitionToFinished;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (void)transitionToExecuting;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)main;
- (id)ckShortDescription;
- (id)initWithOperation:(id)a0 targetOperationQueue:(id)a1;
- (BOOL)isConcurrent;
- (void)cancel;
- (void)start;
- (id)_startDateString;
- (id)statusReportWithIndent:(unsigned long long)a0;
- (id)description;
- (void).cxx_destruct;

@end
