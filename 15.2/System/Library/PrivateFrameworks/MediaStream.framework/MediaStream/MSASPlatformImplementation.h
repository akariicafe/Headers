@class NSString, ACAccountStore;

@interface MSASPlatformImplementation : NSObject <MSASPlatform>

@property (retain, nonatomic) ACAccountStore *accountStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldEnableNewFeatures;
- (BOOL)personIDUsesProductionPushEnvironment:(id)a0;
- (id)pushTokenForPersonID:(id)a0;
- (BOOL)personIDEnabledForAlbumSharing:(id)a0;
- (BOOL)MSASIsAllowedToTransferMetadata;
- (id)MMCSUploadSocketOptionsForPersonID:(id)a0;
- (BOOL)shouldLogAtLevel:(int)a0;
- (id)MMCSDownloadSocketOptionsForPersonID:(id)a0;
- (Class)pluginClass;
- (BOOL)deviceHasEnoughDiskSpaceRemainingToOperate;
- (id)albumSharingDaemon;
- (int)MMCSConcurrentConnectionsCount;
- (id)baseSharingURLForPersonID:(id)a0;
- (void).cxx_destruct;
- (BOOL)MSASIsAllowedToUploadAssets;
- (id)init;
- (BOOL)MSASPersonIDIsAllowedToDownloadAssets:(id)a0;
- (id)pathAlbumSharingDir;
- (id)_accountForPersonID:(id)a0;
- (void)logLevel:(int)a0 personID:(id)a1 albumGUID:(id)a2 format:(id)a3;
- (id)personIDsEnabledForAlbumSharing;

@end
