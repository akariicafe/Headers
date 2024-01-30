@class STKAlertSessionEventQueue, NSString, NSObject;
@protocol OS_os_log;

@interface STKAlertSessionManager : NSObject

@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (readonly, nonatomic) STKAlertSessionEventQueue *eventQueue;
@property (retain) NSString *deviceLanguage;

- (void)_willPresentAlertHandle:(id)a0;
- (void).cxx_destruct;
- (id)remoteAlertDescriptorForSession:(id)a0;
- (void)enqueuePresentationForSession:(id)a0 completion:(id /* block */)a1;
- (id)initWithEventQueue:(id)a0 logger:(id)a1;

@end
