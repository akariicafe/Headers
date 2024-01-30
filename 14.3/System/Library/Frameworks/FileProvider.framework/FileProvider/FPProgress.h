@class NSOperation;

@interface FPProgress : NSProgress {
    NSOperation *_operation;
}

- (void)cancel;
- (void).cxx_destruct;
- (id)initWithOperation:(id)a0;

@end
