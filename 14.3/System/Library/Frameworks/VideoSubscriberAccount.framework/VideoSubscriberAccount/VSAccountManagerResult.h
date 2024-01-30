@class NSOperation;

@interface VSAccountManagerResult : NSObject

@property (retain, nonatomic) NSOperation *operation;

- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (id)initWithOperation:(id)a0;

@end
