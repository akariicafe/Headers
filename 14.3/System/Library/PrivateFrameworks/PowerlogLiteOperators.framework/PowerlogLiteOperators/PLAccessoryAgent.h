@class ACCConnectionInfo, NSMutableDictionary, NSString;

@interface PLAccessoryAgent : PLAgent <ACCConnectionInfoDelegateProtocol>

@property (retain) ACCConnectionInfo *accConnectionInfo;
@property (retain) NSMutableDictionary *connectedEndpoints;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)load;
+ (id)defaults;
+ (id)entryEventPointDefinitions;
+ (id)entryEventPointDefinitionsReceivedPush;

- (id)init;
- (void).cxx_destruct;
- (void)accessoryConnectionAttached:(id)a0 type:(int)a1;
- (void)accessoryConnectionDetached:(id)a0;
- (void)accessoryEndpointAttached:(id)a0 transportType:(int)a1 protocol:(int)a2 properties:(id)a3 forConnection:(id)a4;
- (void)accessoryEndpointDetached:(id)a0 forConnection:(id)a1;
- (void)initOperatorDependancies;

@end
