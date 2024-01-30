@class NSOperation;

@interface VUIAsynchronousWorkToken : NSObject

@property (retain, nonatomic) NSOperation *operation;

- (id)initWithOperation:(id)a0;
- (void)cancel;
- (id)init;
- (void).cxx_destruct;

@end
