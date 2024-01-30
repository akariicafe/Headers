@class DMCBlockOperation;

@interface DMCBlockOperationContext : NSObject

@property (retain, nonatomic) DMCBlockOperation *operation;

- (void).cxx_destruct;
- (void)endBlockOperation;

@end
