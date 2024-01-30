@class NSString, BLTPBSetRemoteGlobalSettingsRequest;

@interface BLTRemoteGlobalSettingsChangeset : NSObject

@property (readonly, nonatomic) NSString *remoteInfoDirectoryLocation;
@property (readonly, nonatomic) NSString *remoteInfoFileLocation;
@property (nonatomic) long long globalScheduledDeliverySetting;
@property (readonly, nonatomic) BOOL needsSend;
@property (readonly, nonatomic) BLTPBSetRemoteGlobalSettingsRequest *blt_protobuf;

+ (id)remoteGlobalSettingsChangesetWithProvider:(id)a0;

- (id)initWithProvider:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)globalScheduledDeliverySettingDescription;
- (BOOL)sendSuccess;

@end
