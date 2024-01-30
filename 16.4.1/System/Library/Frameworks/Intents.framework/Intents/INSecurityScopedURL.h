@class NSURL;

@interface INSecurityScopedURL : NSObject {
    long long _accessCount;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSURL *url;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (BOOL)startAccessingSecurityScopedResource;
- (void)stopAccessingSecurityScopedResource;

@end
