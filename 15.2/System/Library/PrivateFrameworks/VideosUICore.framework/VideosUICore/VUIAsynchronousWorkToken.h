@class NSOperation;

@interface VUIAsynchronousWorkToken : NSObject

@property (retain, nonatomic) NSOperation *operation;

- (id)initWithOperation:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)cancel;

@end
