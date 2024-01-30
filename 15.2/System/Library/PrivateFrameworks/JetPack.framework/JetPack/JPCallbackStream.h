@interface JPCallbackStream : JPStream

@property (copy, nonatomic) id /* block */ readCallback;
@property (copy, nonatomic) id /* block */ seekForwardCallback;
@property (copy, nonatomic) id /* block */ seekToEndCallback;

- (void).cxx_destruct;
- (id)initWithReadCallback:(id /* block */)a0 seekForwardCallback:(id /* block */)a1 seekToEndCallback:(id /* block */)a2;

@end
