@interface MOPublisher : NSObject

- (void)subscribe:(id)a0;
- (id)initPublisher;
- (id)sinkWithCompletion:(id /* block */)a0 recieveInput:(id /* block */)a1;
- (id)sinkWithRecieveInput:(id /* block */)a0;

@end
