@class NSObject;
@protocol OS_dispatch_queue;

@interface OperationState : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property BOOL operationCancelled;
@property int operationRefcount;

- (BOOL)cancelled;
- (BOOL)begin;
- (void)end;
- (void)cancel;
- (id)init;
- (void).cxx_destruct;

@end
