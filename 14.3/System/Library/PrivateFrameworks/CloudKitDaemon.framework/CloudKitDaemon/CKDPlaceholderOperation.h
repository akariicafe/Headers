@class CKDClientContext, NSString, CKDClientProxy, NSOperationQueue, NSDate, NSObject, CKDOperation;
@protocol OS_dispatch_group;

@interface CKDPlaceholderOperation : NSOperation {
    NSObject<OS_dispatch_group> *_group;
}

@property (retain, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) CKDOperation *realOperation;
@property (readonly, nonatomic) NSOperationQueue *targetOperationQueue;
@property (nonatomic) BOOL isExecuting;
@property (nonatomic) BOOL isFinished;
@property (readonly, nonatomic) NSString *operationID;
@property (readonly, weak, nonatomic) CKDClientProxy *proxy;
@property (readonly, nonatomic) CKDClientContext *context;

- (void)cancel;
- (void)_setIsExecuting:(BOOL)a0;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (id)initWithOperation:(id)a0 targetOperationQueue:(id)a1;
- (void).cxx_destruct;
- (id)statusReportWithIndent:(unsigned long long)a0;
- (void)main;
- (id)_startDateString;
- (id)ckShortDescription;
- (id)description;
- (void)_setIsFinished:(BOOL)a0;
- (void)start;
- (id)_runDurationString;
- (BOOL)isConcurrent;

@end
