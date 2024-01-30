@class NSString, NSObject;
@protocol OS_xpc_object, OS_os_log;

@interface ATXXPCActivity : NSObject <ATXActivityDeferrableProtocol, ATXActivityContinuousProtocol> {
    NSObject<OS_xpc_object> *_activity;
    NSString *_name;
    NSObject<OS_os_log> *_handle;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldDefer;
- (id)init;
- (void).cxx_destruct;
- (BOOL)didDefer;
- (BOOL)setDone;
- (id)initWithActivity:(id)a0 name:(id)a1;
- (id)initWithActivity:(id)a0 name:(id)a1 logHandle:(id)a2;
- (BOOL)setContinue;

@end
