@class NSString;

@interface BRKWriter : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSString *path;

- (void)performWithLock:(id /* block */)a0;
- (id)initWithPath:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
