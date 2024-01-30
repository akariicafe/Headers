@class NSString, NSSet;

@interface WBSDomainWhitelistSnapshot : NSObject <WBSRemotePlistSnapshot> {
    NSSet *_whitelistedDomains;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)plistDataWithFormat:(unsigned long long)a0;
- (id)initWithDomains:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithPlistData:(id)a0 error:(id *)a1;
- (BOOL)isDomainWhitelisted:(id)a0;

@end
