@class NSString;

@interface CLKUIMmapFile : NSObject

@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) int descriptor;
@property (readonly, nonatomic) unsigned long long length;
@property (readonly, nonatomic) const void *bytes;

+ (id)mmapFileWithPath:(id)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPath:(id)a0 descriptor:(int)a1 length:(unsigned long long)a2 bytes:(const void *)a3;

@end
