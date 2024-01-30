@class NSUUID;

@interface OSLogEventBacktraceFrame : NSObject {
    unsigned char _uuid[16];
    NSUUID *_imageUUID;
}

@property (readonly, nonatomic) NSUUID *imageUUID;
@property (readonly, nonatomic) const char *imageUUIDBytes;
@property (readonly, nonatomic) unsigned long long imageOffset;

- (id)initWithUUIDBytes:(const char *)a0 andOffset:(unsigned long long)a1;
- (void)dealloc;

@end
