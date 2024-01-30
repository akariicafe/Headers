@interface IPv6PrefixWrapper : NSObject

@property (readonly) struct { int x0; unsigned char x1[12]; } *ipv6Prefix;

- (void)dealloc;
- (id)initWithPrefix:(struct { int x0; unsigned char x1[12]; } *)a0;

@end
