@interface LiveFSMemoryMap : NSObject

@property unsigned int port;
@property (readonly) unsigned long long address;
@property (readonly) unsigned long long size;

+ (id)newWithPort:(unsigned int)a0 address:(unsigned long long)a1 andSize:(unsigned long long)a2;

- (void)dealloc;
- (id)initWithPort:(unsigned int)a0 address:(unsigned long long)a1 andSize:(unsigned long long)a2;

@end
