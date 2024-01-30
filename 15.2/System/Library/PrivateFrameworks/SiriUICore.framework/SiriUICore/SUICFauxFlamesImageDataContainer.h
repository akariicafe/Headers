@interface SUICFauxFlamesImageDataContainer : NSObject

@property (readonly, nonatomic) void *bytes;
@property (readonly, nonatomic) unsigned long long length;

- (void)dealloc;
- (id)initWithPath:(id)a0 length:(unsigned long long)a1;

@end
