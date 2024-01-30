@class NSOperation;

@interface FPProgress : NSProgress {
    NSOperation *_operation;
}

- (id)initWithOperation:(id)a0;
- (void)cancel;
- (void).cxx_destruct;

@end
