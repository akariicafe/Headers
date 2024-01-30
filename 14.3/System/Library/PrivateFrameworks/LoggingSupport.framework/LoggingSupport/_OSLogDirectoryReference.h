@interface _OSLogDirectoryReference : NSObject {
    int _fd;
    long long _etk;
}

@property (readonly, nonatomic) int fileDescriptor;

- (id)initWithDescriptor:(int)a0;
- (void)close;
- (void)dealloc;
- (id)initWithDescriptor:(int)a0 sandboxExtensionToken:(const char *)a1;

@end
