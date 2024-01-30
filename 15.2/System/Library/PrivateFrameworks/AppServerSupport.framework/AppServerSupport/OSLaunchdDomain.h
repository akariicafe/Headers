@interface OSLaunchdDomain : NSObject {
    int _type;
    unsigned long long _handle;
}

+ (id)domainForUser:(unsigned int)a0;
+ (id)loginwindowDomain;
+ (unsigned int)_createDomainOptions2flags:(unsigned long long)a0;
+ (id)currentDomain;
+ (id)domainForRoleAccountUser:(unsigned int)a0;
+ (id)domainForPid:(int)a0;
+ (id)createDomainForRoleAccount:(unsigned int)a0 sessionType:(id)a1 options:(unsigned long long)a2 error:(id *)a3;

- (BOOL)unpendLaunches:(id *)a0;
- (id)initWithType:(int)a0 handle:(unsigned long long)a1;
- (BOOL)initiateRemoval:(id *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
