@class NSObject;
@protocol OS_dispatch_queue;

@interface OperationState : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property BOOL operationCancelled;
@property int operationRefcount;

- (BOOL)cancelled;
- (void)end;
- (BOOL)begin;
- (void).cxx_destruct;
- (id)init;
- (void)cancel;

@end
