@interface ATXAnchorModelDataAnonymizer : NSObject

+ (id)setSaltToUserDefaults:(id)a0 scheme:(id)a1;
+ (BOOL)isFirstPartyApp:(id)a0;
+ (id)readDeviceSpecificSalt;
+ (void)anonymizeMessage:(id)a0;
+ (BOOL)shouldAnonymizeBundle:(id)a0;
+ (void)_hashAndSaltActionKeyMetadataIfNeededInList:(id)a0 withSalt:(id)a1;
+ (BOOL)shouldAnonymizeActionType:(id)a0 forBundleId:(id)a1;

@end
