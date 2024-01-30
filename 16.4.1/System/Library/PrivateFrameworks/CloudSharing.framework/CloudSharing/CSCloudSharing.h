@interface CSCloudSharing : NSObject

+ (void)addParticipantsToShare:(id)a0 containerSetupInfo:(id)a1 emailAddresses:(id)a2 phoneNumbers:(id)a3 completionHandler:(id /* block */)a4;
+ (void)addParticipantsToShare:(id)a0 containerSetupInfo:(id)a1 emailAddresses:(id)a2 phoneNumbers:(id)a3 permissionType:(long long)a4 allowOthersToInvite:(BOOL)a5 completionHandler:(id /* block */)a6;
+ (void)ckMetadataFromShareURL:(id)a0 containerSetupInfo:(id)a1 completionHandler:(id /* block */)a2;
+ (void)completeShare:(id)a0 containerSetupInfo:(id)a1 emailAddresses:(id)a2 phoneNumbers:(id)a3 accessType:(long long)a4 permissionType:(long long)a5 allowOthersToInvite:(BOOL)a6 completionHandler:(id /* block */)a7;
+ (void)existingShareForFileOrFolderURL:(id)a0 completionHandler:(id /* block */)a1;
+ (void)removeFromShare:(id)a0 containerSetupInfo:(id)a1 completionHandler:(id /* block */)a2;
+ (void)shareFileOrFolderURL:(id)a0 emailAddresses:(id)a1 phoneNumbers:(id)a2 accessType:(long long)a3 permissionType:(long long)a4 allowOthersToInvite:(BOOL)a5 completionHandler:(id /* block */)a6;
+ (void)shareFolderRemovingSubshares:(id)a0 emailAddresses:(id)a1 phoneNumbers:(id)a2 accessType:(long long)a3 permissionType:(long long)a4 allowOthersToInvite:(BOOL)a5 completionHandler:(id /* block */)a6;
+ (void)sharingStatusForFileOrFolderURL:(id)a0 completionHandler:(id /* block */)a1;
+ (void)sharingStatusForShare:(id)a0 completionHandler:(id /* block */)a1;
+ (void)updateShare:(id)a0 containerSetupInfo:(id)a1 completionHandler:(id /* block */)a2;
+ (void)userNameAndEmail:(id)a0 containerSetupInfo:(id)a1 completionHandler:(id /* block */)a2;
+ (void)messageContentForMail:(id)a0 share:(id)a1 fileURL:(id)a2 appName:(id)a3 appIconData:(id)a4 completionHandler:(id /* block */)a5;
+ (void)removeFromShareURL:(id)a0 containerSetupInfo:(id)a1 completionHandler:(id /* block */)a2;
+ (void)completeShare:(id)a0 containerSetupInfo:(id)a1 emailAddresses:(id)a2 phoneNumbers:(id)a3 accessType:(long long)a4 permissionType:(long long)a5 allowOthersToInvite:(BOOL)a6 keepExistingParticipants:(BOOL)a7 completionHandler:(id /* block */)a8;
+ (void)shareFileOrFolderShareURL:(id)a0 emailAddresses:(id)a1 phoneNumbers:(id)a2 accessType:(long long)a3 permissionType:(long long)a4 allowOthersToInvite:(BOOL)a5 keepExistingParticipants:(BOOL)a6 completionHandler:(id /* block */)a7;
+ (void)shareFileOrFolderURL:(id)a0 emailAddresses:(id)a1 phoneNumbers:(id)a2 accessType:(long long)a3 permissionType:(long long)a4 allowOthersToInvite:(BOOL)a5 keepExistingParticipants:(BOOL)a6 completionHandler:(id /* block */)a7;
+ (void)shareOrUpdateShareURL:(id)a0 containerSetupInfo:(id)a1 emailAddresses:(id)a2 phoneNumbers:(id)a3 accessType:(long long)a4 permissionType:(long long)a5 allowOthersToInvite:(BOOL)a6 completionHandler:(id /* block */)a7;

@end
