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

- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)dealloc;
- (void)_setupAttSiriSvcXpcConnection;
- (void)startAttendingWithContext:(id)a0;
- (void)stopAttendingWithContext:(id)a0;
- (void)siriRequestProcessingCompleted;
- (void)attSiriDidDetectAttendingTrigger:(id)a0;

@end
