@interface _ICQMegaBackupManager : NSObject

- (id)_quotaBackupCheckURLForAccount:(id)a0;
- (id)_extendExpirationURLForAccount:(id)a0;
- (id)_updateStatusURLForAccount:(id)a0;
- (void)extendExpirationForAccount:(id)a0 deviceBackupUUID:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)extendExpirationForAccount:(id)a0 deviceBackupUUID:(id)a1 requestedExpirationDate:(id)a2 queue:(id)a3 completion:(id /* block */)a4;
- (void)requestMegaBackupForAccount:(id)a0 deviceBackupUUID:(id)a1 deviceTotalUsedSpaceInBytes:(id)a2 entryMethod:(long long)a3 deepLinkURL:(id)a4 queue:(id)a5 completion:(id /* block */)a6;
- (void)requestMegaBackupForAccount:(id)a0 deviceBackupUUID:(id)a1 deviceTotalUsedSpaceInBytes:(id)a2 queue:(id)a3 completion:(id /* block */)a4;
- (void)updateMegaBackupStatusForAccount:(id)a0 deviceBackupUUID:(id)a1 status:(long long)a2 queue:(id)a3 completion:(id /* block */)a4;

@end
