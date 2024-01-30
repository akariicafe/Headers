@class NSMutableArray, NSObject;
@protocol OS_xpc_object;

@interface HIDPreferencesHelperListener : NSObject {
    NSObject<OS_xpc_object> *_listener;
    NSMutableArray *_clients;
}

- (void)removeClient:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)setupListener;
- (void)acceptConnection:(id)a0;

@end
