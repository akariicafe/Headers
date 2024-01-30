@interface NWDatagramConnection : NWConnection

+ (id)connectionWithConnectedSocket:(int)a0;

- (BOOL)readDatagramsWithMinimumCount:(unsigned long long)a0 maximumCount:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (BOOL)writeDatagrams:(id)a0 completionHandler:(id /* block */)a1;

@end
