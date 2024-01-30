@interface VSOnceAndOnlyOnceHandler : NSObject {
    int _counter;
}

@property (copy, nonatomic) id /* block */ block;

- (void).cxx_destruct;
- (void)dealloc;
- (void)invoke;

@end
