@interface _NSPlaceholderData : NSData

- (id)initWithBytes:(void *)a0 length:(unsigned long long)a1 copy:(BOOL)a2 deallocator:(id /* block */)a3;
- (id)init;
- (oneway void)release;
- (id)initWithData:(id)a0;
- (unsigned long long)retainCount;
- (id)retain;

@end
