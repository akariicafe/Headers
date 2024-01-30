@interface geo_isolater : NSObject {
    char *_name;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (id)description;
- (id)initWithName:(const char *)a0;
- (void)dealloc;
- (id)debugDescription;

@end
