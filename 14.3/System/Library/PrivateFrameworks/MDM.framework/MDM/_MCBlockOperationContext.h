@class MCBlockOperation;

@interface _MCBlockOperationContext : NSObject <MCBlockOperationContext>

@property (retain, nonatomic) MCBlockOperation *operation;

- (void).cxx_destruct;
- (void)endBlockOperation;

@end
