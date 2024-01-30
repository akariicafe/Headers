@interface TRAccountManager : NSObject

+ (id)_primaryICloudAccount;
+ (id)idmsAccountForAccountService:(unsigned long long)a0;
+ (id)associatedAccountServicesForIDMSAccount:(id)a0;
+ (id)_idmsAccountForICloudService;
+ (id)_idmsAccountForITunesService;
+ (id)_idmsAccountForGameCenterService;
+ (id)_idmsAccountForAccountWithUsername:(id)a0 altDSID:(id)a1 DSID:(id)a2;
+ (id)_primaryITunesAccount;
+ (id)_primaryGameCenterAccount;

@end
