@class NSString, ACAccountStore;

@interface MSASPlatformImplementation : NSObject <MSASPlatform>

@property (retain, nonatomic) ACAccountStore *accountStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldLogAtLevel:(int)a0;
- (id)init;
- (void).cxx_destruct;
- (Class)pluginClass;
- (id)_accountForPersonID:(id)a0;
- (BOOL)shouldEnableNewFeatures;
- (BOOL)personIDUsesProductionPushEnvironment:(id)a0;
- (id)pushTokenForPersonID:(id)a0;
- (int)MMCSConcurrentConnectionsCount;
- (BOOL)deviceHasEnoughDiskSpaceRemainingToOperate;
- (BOOL)personIDEnabledForAlbumSharing:(id)a0;
- (id)MMCSDownloadSocketOptionsForPersonID:(id)a0;
- (id)MMCSUploadSocketOptionsForPersonID:(id)a0;
- (void)logLevel:(int)a0 personID:(id)a1 albumGUID:(id)a2 format:(id)a3;
- (id)albumSharingDaemon;
- (id)pathAlbumSharingDir;
- (id)baseSharingURLForPersonID:(id)a0;
- (id)personIDsEnabledForAlbumSharing;
- (BOOL)MSASIsAllowedToTransferMetadata;
- (BOOL)MSASIsAllowedToUploadAssets;
- (BOOL)MSASPersonIDIsAllowedToDownloadAssets:(id)a0;

@end
