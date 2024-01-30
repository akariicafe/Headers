@class NSDictionary;

@interface CRPersonalizationManager : NSObject {
    NSDictionary *personalizationMap;
    struct __AMAuthInstall { } *amai;
}

+ (id)defaultManager;
+ (struct __AMAuthInstall { } *)createBaseAMAIObject;
+ (BOOL)isdarwinOSRamdisk;
+ (id)initWithAuthInstallObj:(struct __AMAuthInstall { } *)a0;
+ (struct __AMAuthInstall { } *)getDefaultAMAuthInstallRef;
+ (BOOL)IsTatsuErrorNetworkingRelated:(long long)a0;

- (id)_init:(struct __AMAuthInstall { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)_personalizeWithElement:(id)a0 useCache:(BOOL)a1 parsedResponseData:(id *)a2 error:(id *)a3;
- (BOOL)personalizeWithElements:(id)a0 error:(id *)a1;
- (BOOL)getRemoteTrustObjectDigestUsingCache:(BOOL)a0 digestData:(id *)a1 error:(id *)a2;
- (BOOL)getPDIAPTicketUsingCache:(BOOL)a0 apTicketData:(id *)a1 error:(id *)a2;
- (BOOL)getBMUTicketForVeridianFWUpdateWithOptions:(id)a0 BMUTicket:(id *)a1 error:(id *)a2;
- (BOOL)getSavageTicketForSavageFWUpdateWithOptions:(id)a0 SavageTicket:(id *)a1 error:(id *)a2;
- (BOOL)getApTicketForMesaPairing:(id *)a0 error:(id *)a1;
- (BOOL)addCustomPersonalizationElementWithId:(id)a0 personalizationElement:(id)a1 error:(id *)a2;

@end
