@class NSString, NSObject, NSDate;
@protocol OS_dispatch_group;

@interface CKPlaceholderOperation : NSOperation {
    NSObject<OS_dispatch_group> *_group;
}

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSString *sectionID;
@property (retain, nonatomic) id context;
@property (readonly, nonatomic) NSString *operationID;
@property (readonly, copy, nonatomic) id /* block */ daemonInvokeBlock;
@property (nonatomic) BOOL finishInvoked;
@property (nonatomic) BOOL isExecuting;
@property (nonatomic) BOOL isFinished;

- (void)_setIsExecuting:(BOOL)a0;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (void)finish;
- (id)initWithOperation:(id)a0 daemonInvocationBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)main;
- (id)description;
- (void)_setIsFinished:(BOOL)a0;
- (void)start;
- (BOOL)isConcurrent;

@end
