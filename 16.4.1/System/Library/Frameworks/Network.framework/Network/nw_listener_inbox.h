@class NSString, NSObject;
@protocol nw_listener_inbox_delegate, OS_nw_interface, OS_nw_endpoint, OS_nw_parameters;

@interface nw_listener_inbox : NSObject {
    NSObject<nw_listener_inbox_delegate> *_delegate;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSString *_description;
    NSObject<OS_nw_parameters> *_parameters;
    int _level;
    unsigned char _suspended : 1;
}

@property (readonly, nonatomic) NSObject<OS_nw_endpoint> *local_endpoint;
@property (readonly, nonatomic) NSObject<OS_nw_interface> *interface;
@property (nonatomic) BOOL multicast;

- (BOOL)isSuspended;
- (BOOL)suspend;
- (BOOL)cancel;
- (id)initWithDelegate:(id)a0;
- (id)start;
- (void).cxx_destruct;
- (BOOL)resume;

@end
