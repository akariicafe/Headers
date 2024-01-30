@class NSString, ACCConnectionInfo, NSObject;
@protocol OS_os_log;

@interface AccessoryDetection : NSObject <ACCConnectionInfoDelegateProtocol> {
    NSObject<OS_os_log> *_logHandle;
    ACCConnectionInfo *_connection;
    NSString *_sleeveUUID;
    void *_aabc;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)accessoryEndpointDetached:(id)a0 forConnection:(id)a1;
- (void)start;
- (void)accessoryEndpointAttached:(id)a0 transportType:(int)a1 protocol:(int)a2 properties:(id)a3 forConnection:(id)a4;
- (void)stop;
- (id)initWithAABC:(void *)a0;

@end
