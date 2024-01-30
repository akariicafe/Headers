@class ACCConnectionInfo, NSMutableDictionary, NSString;

@interface AccessoryDetection : NSObject <ACCConnectionInfoDelegateProtocol>

@property (retain) ACCConnectionInfo *fConnectionInfoProvider;
@property struct AccessoryDetectionCallback { id /* block */ attached; id /* block */ detached; } fCallback;
@property (retain) NSMutableDictionary *fAccessoryEndpointList;
@property (retain) NSMutableDictionary *fConnectionInfoFilter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCallback:(struct AccessoryDetectionCallback { id /* block */ x0; id /* block */ x1; })a0;
- (void).cxx_destruct;
- (void)stop;
- (id).cxx_construct;
- (void)accessoryEndpointAttached:(id)a0 transportType:(int)a1 protocol:(int)a2 properties:(id)a3 forConnection:(id)a4;
- (void)start;
- (void)accessoryEndpointDetached:(id)a0 forConnection:(id)a1;

@end
