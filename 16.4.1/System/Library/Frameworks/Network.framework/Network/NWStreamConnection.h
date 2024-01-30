@interface NWStreamConnection : NWConnection

+ (id)connectionWithConnectedSocket:(int)a0;

- (BOOL)readDataWithMinimumLength:(unsigned long long)a0 maximumLength:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (BOOL)writeCloseWithCompletionHandler:(id /* block */)a0;
- (BOOL)writeData:(id)a0 completionHandler:(id /* block */)a1;

@end
