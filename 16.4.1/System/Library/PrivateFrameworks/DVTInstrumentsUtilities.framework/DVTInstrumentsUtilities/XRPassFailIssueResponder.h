@class NSString, NSMutableArray, NSObject;
@protocol XRIssueResponder, OS_dispatch_queue;

@interface XRPassFailIssueResponder : NSObject <XRIssueResponder> {
    id<XRIssueResponder> _nextResponder;
    NSMutableArray *_uniqueErrors;
    NSObject<OS_dispatch_queue> *_uniqueErrorsQueue;
}

@property (readonly) BOOL failureOccurred;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)failures;
- (id)initWithNextResponder:(id)a0;
- (void)handleIssue:(id)a0 type:(short)a1 from:(id)a2;

@end
