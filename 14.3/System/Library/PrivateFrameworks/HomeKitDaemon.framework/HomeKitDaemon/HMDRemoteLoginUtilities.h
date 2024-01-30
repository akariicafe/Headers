@interface HMDRemoteLoginUtilities : NSObject

+ (long long)serviceTypeForAccountService:(unsigned long long)a0;
+ (id)primaryITunesAccount;
+ (id)idmsAccountForAccountWithUsername:(id)a0 altDSID:(id)a1 DSID:(id)a2;

@end
