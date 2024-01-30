@interface NWMessageConnection : NWConnection

- (void)readMessageWithCompletionHandler:(id /* block */)a0;
- (void)writeMessage:(id)a0 completionHandler:(id /* block */)a1;

@end
