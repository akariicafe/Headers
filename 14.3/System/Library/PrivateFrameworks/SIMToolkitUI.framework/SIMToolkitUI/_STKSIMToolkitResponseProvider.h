@class NSString, NSDictionary, CTXPCServiceSubscriptionContext, CoreTelephonyClient, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface _STKSIMToolkitResponseProvider : NSObject <STKAlertSessionResponseProvider> {
    NSObject<OS_dispatch_queue> *_queue;
    CoreTelephonyClient *_telephonyClient;
    CTXPCServiceSubscriptionContext *_context;
    NSDictionary *_options;
    BOOL _hasSentResponse;
    NSObject<OS_os_log> *_logger;
}

@property (readonly, nonatomic) NSObject<OS_os_log> *logger;
@property (readonly, nonatomic) BOOL hasSentResponse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendResponse:(long long)a0;
- (void).cxx_destruct;
- (void)sendResponse:(long long)a0 withBOOLResult:(BOOL)a1;
- (struct __CFString { } *)_responseFromResponseType:(long long)a0;
- (void)sendResponse:(long long)a0 withStringResult:(id)a1;
- (id)initWithQueue:(id)a0 telephonyClient:(id)a1 context:(id)a2 options:(id)a3 logger:(id)a4;
- (void)sendSuccessWithSelectedIndex:(unsigned long long)a0;

@end
