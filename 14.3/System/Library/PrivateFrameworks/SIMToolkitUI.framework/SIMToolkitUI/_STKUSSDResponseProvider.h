@class NSString, NSDictionary, CoreTelephonyClient, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface _STKUSSDResponseProvider : NSObject <STKAlertSessionResponseProvider> {
    NSObject<OS_dispatch_queue> *_queue;
    CoreTelephonyClient *_telephonyClient;
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
- (void)dealloc;
- (id)initWithQueue:(id)a0 telephonyClient:(id)a1 options:(id)a2 logger:(id)a3;
- (void)sendResponse:(long long)a0 withStringResult:(id)a1;

@end
