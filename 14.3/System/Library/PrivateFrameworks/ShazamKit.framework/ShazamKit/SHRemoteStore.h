@class NSString;

@interface SHRemoteStore : SHStore

@property (readonly, copy, nonatomic) NSString *partnerName;
@property (readonly, copy, nonatomic) NSString *installationID;

+ (id)new;
+ (BOOL)validatePartnerName:(id)a0;
+ (BOOL)validateInstallationID:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)createMatcher;
- (id)initWithPartnerName:(id)a0;
- (id)initWithPartnerName:(id)a0 installationID:(id)a1;

@end
