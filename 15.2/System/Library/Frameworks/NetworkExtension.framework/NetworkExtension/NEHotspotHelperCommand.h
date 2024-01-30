@class NSString, NSArray, NEHotspotNetwork;

@interface NEHotspotHelperCommand : NSObject

@property struct __CNPluginCommand { } *command;
@property (readonly) NSString *interfaceName;
@property (readonly) long long commandType;
@property (readonly) NEHotspotNetwork *network;
@property (readonly) NSArray *networkList;

- (id)description;
- (id)createResponse:(long long)a0;
- (id)createTCPConnection:(id)a0;
- (id)createUDPSession:(id)a0;
- (void)dealloc;
- (id)initWithCommand:(struct __CNPluginCommand { } *)a0;

@end
