@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_nw_dictionary, OS_nw_fd_wrapper;

@interface NWConcrete_nw_path_observer : NSObject <OS_nw_path_observer> {
    NSObject<OS_dispatch_queue> *client_queue;
    id /* block */ update_block;
    NSObject<OS_nw_dictionary> *known_paths;
    NSObject<OS_nw_fd_wrapper> *fd;
    void *source;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
