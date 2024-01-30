@class NSLock;

@interface SSVMediaSocialAdminStatusOperation : SSVComplexOperation {
    NSLock *_lock;
    id /* block */ _outputBlock;
}

@property (copy) id /* block */ outputBlock;

- (id)init;
- (void).cxx_destruct;
- (void)main;

@end
