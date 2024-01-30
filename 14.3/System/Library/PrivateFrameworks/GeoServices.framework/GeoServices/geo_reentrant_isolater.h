@interface geo_reentrant_isolater : NSObject {
    char *_name;
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _lock;
}

- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (id)initWithName:(const char *)a0;

@end
