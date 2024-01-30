@class NSLock;

@interface SSVMediaSocialAdminStatusOperation : SSVComplexOperation {
    NSLock *_lock;
    id /* block */ _outputBlock;
}

@property (copy) id /* block */ outputBlock;

- (void)main;
- (void).cxx_destruct;
- (id)init;

@end
