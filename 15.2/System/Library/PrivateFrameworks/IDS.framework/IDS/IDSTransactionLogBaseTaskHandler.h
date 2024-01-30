@class IDSTransactionLogTask, NSObject;
@protocol OS_dispatch_queue;

@interface IDSTransactionLogBaseTaskHandler : IDSTransactionLogTaskHandler

@property (retain, nonatomic) IDSTransactionLogTask *task;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)perform;
- (id)initWithTask:(id)a0 delegate:(id)a1 queue:(id)a2;

@end
