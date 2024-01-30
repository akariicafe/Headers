@class NSString, NSMutableArray, NSObject;
@protocol OS_os_log;

@interface EDNonAcceptingServer : NSObject <NSXPCListenerDelegate, EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) NSMutableArray *listeners;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithMachServiceNames:(id)a0;

@end
