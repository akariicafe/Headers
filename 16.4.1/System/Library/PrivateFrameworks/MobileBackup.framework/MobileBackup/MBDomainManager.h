@class NSDictionary, MBSystemDomainsVersions, NSMutableDictionary;

@interface MBDomainManager : NSObject

@property (retain, nonatomic) MBSystemDomainsVersions *systemDomainsVersions;
@property (retain, nonatomic) NSDictionary *systemDomainsByName;
@property (retain, nonatomic) NSMutableDictionary *domainsByName;

- (void)addDomain:(id)a0;
- (id)allDomains;
- (void).cxx_destruct;
- (id)initWithDomains:(id)a0;
- (id)redirectDomain:(id)a0 forRelativePath:(id)a1;
- (id)initWithSystemDomains:(id)a0 versions:(id)a1;
- (void)addDomain:(id)a0 forName:(id)a1;
- (BOOL)containsDomainName:(id)a0;
- (id)domainForName:(id)a0;
- (id)domainForPath:(id)a0 relativePath:(id *)a1;
- (id)initWithAccountType:(long long)a0 volumeMountPoint:(id)a1 error:(id *)a2;
- (id)initWithAccountType:(long long)a0 volumeMountPoint:(id)a1 plistPath:(id)a2 error:(id *)a3;
- (id)initWithDefaultSystemDomainsPlist;
- (id)initWithSystemDomains:(id)a0;
- (id)initWithSystemDomainsPlist:(id)a0;
- (BOOL)isSystemDomainName:(id)a0;

@end
