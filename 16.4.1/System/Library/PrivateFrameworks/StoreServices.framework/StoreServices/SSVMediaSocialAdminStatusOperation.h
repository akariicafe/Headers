@class NSLock;

@interface SSVMediaSocialAdminStatusOperation : SSVComplexOperation {
    NSLock *_lock;
    id /* block */ _outputBlock;
}

@property (copy) id /* block */ outputBlock;

- (void)main;
- (id)init;
- (void).cxx_destruct;

@end
