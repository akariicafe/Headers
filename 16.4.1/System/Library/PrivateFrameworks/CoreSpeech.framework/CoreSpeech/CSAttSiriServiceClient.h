@class NSString, NSXPCConnection;
@protocol CSAttSiriServiceDelegate;

@interface CSAttSiriServiceClient : NSObject <CSAttSiriServiceDelegate, CSAttSiriServiceProtocol>

@property (retain, nonatomic) NSXPCConnection *attSiriSvcConn;
@property (retain, nonatomic) id remoteSvcProxy;
@property (weak, nonatomic) id<CSAttSiriServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_setupAttSiriSvcXpcConnection;
- (void)attSiriAttendingFailed;
- (void)attSiriAttendingTimeoutTriggered;
- (void)attSiriDidDetectAttendingTrigger:(id)a0;
- (void)siriRequestProcessingCompleted;
- (void)startAttendingWithContext:(id)a0;
- (void)stopAttendingWithContext:(id)a0;

@end
