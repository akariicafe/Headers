@class ACAccount;

@interface ICQRequestProvider : NSObject {
    ACAccount *_account;
}

+ (BOOL)attemptSetRequest:(id)a0 toPostWithJSONDict:(id)a1;
+ (void)addEntriesToPostDictionary:(id)a0 forStub:(id)a1;
+ (id)stringTimeOfLastBackup;

- (void).cxx_destruct;
- (id)initWithAccount:(id)a0;
- (void)addCommonHeadersToRequest:(id)a0;
- (id)urlForQuotaKey:(id)a0;

@end
