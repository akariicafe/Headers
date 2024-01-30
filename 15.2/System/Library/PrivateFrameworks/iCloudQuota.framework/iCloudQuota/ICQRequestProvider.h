@class ACAccount;

@interface ICQRequestProvider : NSObject {
    ACAccount *_account;
}

+ (id)stringTimeOfLastBackup;
+ (void)addEntriesToPostDictionary:(id)a0 forStub:(id)a1;
+ (BOOL)attemptSetRequest:(id)a0 toPostWithJSONDict:(id)a1;

- (id)initWithAccount:(id)a0;
- (id)getBackupDeviceUUID;
- (id)urlForQuotaKey:(id)a0;
- (void)addCommonHeadersToRequest:(id)a0;
- (void)addBasicHeadersToRequest:(id)a0;
- (void).cxx_destruct;
- (void)addBasicAndCloudBackupHeadersToRequest:(id)a0;

@end
