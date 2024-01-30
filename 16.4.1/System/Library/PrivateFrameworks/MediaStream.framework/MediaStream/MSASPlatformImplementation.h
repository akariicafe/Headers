@class NSString, ACAccountStore;

@interface MSASPlatformImplementation : NSObject <MSASPlatform>

@property (retain, nonatomic) ACAccountStore *accountStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldLogAtLevel:(int)a0;
- (BOOL)shouldEnableNewFeatures;
- (id)pathAlbumSharingDir;
- (Class)pluginClass;
- (id)_accountForPersonID:(id)a0;
- (id)baseSharingURLForPersonID:(id)a0;
- (void)logLevel:(int)a0 personID:(id)a1 albumGUID:(id)a2 format:(id)a3;
- (id)MMCSDownloadSocketOptionsForPersonID:(id)a0;
- (id)personIDsEnabledForAlbumSharing;
- (int)MMCSConcurrentConnectionsCount;
- (id)MMCSUploadSocketOptionsForPersonID:(id)a0;
- (BOOL)MSASIsAllowedToUploadAssets;
- (BOOL)personIDEnabledForAlbumSharing:(id)a0;
- (id)albumSharingDaemon;
- (id)pushTokenForPersonID:(id)a0;
- (BOOL)MSASPersonIDIsAllowedToDownloadAssets:(id)a0;
- (BOOL)deviceHasEnoughDiskSpaceRemainingToOperate;
- (BOOL)MSASIsAllowedToTransferMetadata;
- (id)init;
- (void).cxx_destruct;
- (BOOL)personIDUsesProductionPushEnvironment:(id)a0;

@end
