@interface NSOutputStream : NSStream {
    unsigned char _reserved[128];
}

@property (readonly) BOOL hasSpaceAvailable;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)outputStreamToFileAtPath:(id)a0 append:(BOOL)a1;
+ (id)outputStreamToBuffer:(char *)a0 capacity:(unsigned long long)a1;
+ (id)outputStreamWithURL:(id)a0 append:(BOOL)a1;
+ (id)outputStreamToMemory;

- (struct { long long x0; int x1; })_cfStreamError;
- (unsigned long long)_cfTypeID;
- (void)dealloc;
- (long long)write:(const char *)a0 maxLength:(unsigned long long)a1;
- (id)initToMemory;
- (id)initWithURL:(id)a0 append:(BOOL)a1;
- (BOOL)hasSpaceAvailable;
- (id)initToBuffer:(char *)a0 capacity:(unsigned long long)a1;

@end
