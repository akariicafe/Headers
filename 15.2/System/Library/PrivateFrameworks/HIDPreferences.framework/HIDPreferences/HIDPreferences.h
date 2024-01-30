@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface HIDPreferences : NSObject <HIDPreferencesProtocol> {
    NSObject<OS_dispatch_queue> *_queue;
    int _option;
    NSObject<OS_xpc_object> *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)destroyConnection:(id)a0;
+ (id)getReply:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)setupConnection;
- (void)set:(id)a0 value:(id)a1 user:(id)a2 host:(id)a3 domain:(id)a4;
- (void)setMultiple:(id)a0 keysToRemove:(id)a1 user:(id)a2 host:(id)a3 domain:(id)a4;
- (void)synchronize:(id)a0 host:(id)a1 domain:(id)a2;
- (void)copy:(id)a0 user:(id)a1 host:(id)a2 domain:(id)a3 reply:(id /* block */)a4;
- (void)copyMultiple:(id)a0 user:(id)a1 host:(id)a2 domain:(id)a3 reply:(id /* block */)a4;
- (void)setDomain:(id)a0 value:(id)a1 domain:(id)a2;
- (void)copyDomain:(id)a0 domain:(id)a1 reply:(id /* block */)a2;
- (id)initWithOption:(int)a0;

@end
