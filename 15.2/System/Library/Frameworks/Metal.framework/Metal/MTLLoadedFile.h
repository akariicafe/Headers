@class NSData;

@interface MTLLoadedFile : NSObject {
    void *_parent;
    long long _modifiedTimeWhenCached;
    struct FileIdentifier { int dev; unsigned long long ino; } _identity;
    BOOL _isCached;
}

@property (readonly) NSData *contents;

- (void)dealloc;
- (id).cxx_construct;
- (id)initWithData:(id)a0 parent:(void *)a1;

@end
