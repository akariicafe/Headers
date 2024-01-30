@class NSURL;

@interface INSecurityScopedURL : NSObject {
    long long _accessCount;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSURL *url;

- (void)stopAccessingSecurityScopedResource;
- (BOOL)startAccessingSecurityScopedResource;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;

@end
