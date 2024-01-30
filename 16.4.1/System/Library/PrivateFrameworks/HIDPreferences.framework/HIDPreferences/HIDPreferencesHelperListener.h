@class NSMutableArray, NSObject;
@protocol OS_xpc_object;

@interface HIDPreferencesHelperListener : NSObject {
    NSObject<OS_xpc_object> *_listener;
    NSMutableArray *_clients;
}

- (void)removeClient:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)acceptConnection:(id)a0;
- (BOOL)setupListener;

@end
