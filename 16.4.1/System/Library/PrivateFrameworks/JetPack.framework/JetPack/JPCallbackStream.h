@interface JPCallbackStream : JPStream

@property (copy, nonatomic) id /* block */ readCallback;
@property (copy, nonatomic) id /* block */ seekForwardCallback;
@property (copy, nonatomic) id /* block */ seekToEndCallback;

- (id)initWithReadCallback:(id /* block */)a0 seekForwardCallback:(id /* block */)a1 seekToEndCallback:(id /* block */)a2;
- (void).cxx_destruct;

@end
