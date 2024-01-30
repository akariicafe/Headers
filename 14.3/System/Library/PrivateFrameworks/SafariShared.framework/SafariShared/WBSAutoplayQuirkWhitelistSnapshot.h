@class NSString, NSDictionary;

@interface WBSAutoplayQuirkWhitelistSnapshot : NSObject <WBSRemotePlistSnapshot> {
    NSDictionary *_domainsToQuirkTypes;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPlistData:(id)a0 error:(id *)a1;
- (id)plistDataWithFormat:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)quirkTypeForDomain:(id)a0;

@end
