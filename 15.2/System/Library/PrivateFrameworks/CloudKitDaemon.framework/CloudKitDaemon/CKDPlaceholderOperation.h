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

- (void)transitionToExecuting;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (BOOL)isConcurrent;
- (BOOL)isFinished;
- (id)statusReportWithIndent:(unsigned long long)a0;
- (id)initWithOperation:(id)a0 targetOperationQueue:(id)a1;
- (id)description;
- (void)start;
- (BOOL)isExecuting;
- (void)main;
- (id)_runDurationString;
- (void).cxx_destruct;
- (id)_startDateString;
- (id)ckShortDescription;
- (void)transitionToFinished;
- (void)cancel;

@end
