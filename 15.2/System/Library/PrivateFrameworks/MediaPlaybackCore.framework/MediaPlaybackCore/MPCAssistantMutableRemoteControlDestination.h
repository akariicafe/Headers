@class NSString, NSArray;

@interface MPCAssistantMutableRemoteControlDestination : MPCAssistantRemoteControlDestination

@property (copy, nonatomic) NSString *appBundleID;
@property (copy, nonatomic) NSString *playerID;
@property (nonatomic) void *origin;
@property (copy, nonatomic) NSArray *outputDeviceUIDs;
@property (copy, nonatomic) NSArray *hashedOutputDeviceUIDs;
@property (copy, nonatomic) NSArray *outputGroups;
@property (copy, nonatomic) NSString *outputGroupID;
@property (copy, nonatomic) NSString *originatingOutputDeviceUID;
@property (nonatomic) BOOL singleGroup;
@property (nonatomic) BOOL originatingDeviceControl;

- (void)setOrigin:(void *)a0;
- (void)setAppBundleID:(id)a0;
- (void)setPlayerID:(id)a0;
- (void)setOutputDeviceUIDs:(id)a0;
- (void)setHashedOutputDeviceUIDs:(id)a0;
- (void)setOutputGroups:(id)a0;
- (void)setOutputGroupID:(id)a0;
- (void)setOriginatingOutputDeviceUID:(id)a0;
- (void)setSingleGroup:(BOOL)a0;
- (void)setOriginatingDeviceControl:(BOOL)a0;

@end
