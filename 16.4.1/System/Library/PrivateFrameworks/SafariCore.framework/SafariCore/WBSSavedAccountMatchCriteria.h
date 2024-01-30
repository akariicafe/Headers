@class NSString, NSSet, NSURL, WBSAutoFillAssociatedDomainsManager, WBSGlobalFrameIdentifier;

@interface WBSSavedAccountMatchCriteria : NSObject

@property (nonatomic) unsigned long long options;
@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *partialUsername;
@property (retain, nonatomic) WBSAutoFillAssociatedDomainsManager *associatedDomainsManager;
@property (readonly, nonatomic) WBSGlobalFrameIdentifier *webFrameIdentifier;
@property (readonly, nonatomic) BOOL queryShouldOmitAutoFillPasskeyMatches;
@property (readonly, nonatomic) BOOL queryShouldReturnSavedAccountsMatchingHighLevelDomainAndSimplifiedDomainOfURL;
@property (readonly, nonatomic) BOOL queryShouldReturnSavedAccountsMatchingAssociatedDomainsOfURL;
@property (readonly, nonatomic) BOOL queryShouldReturnSavedAccountsWithEmptyUsernames;
@property (readonly, nonatomic) NSSet *associatedDomainsForURL;

+ (id)criteriaForExactFQDNPasswordMatchesOfURL:(id)a0;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0 options:(unsigned long long)a1 partialUsername:(id)a2 associatedDomainsManager:(id)a3 webFrameIdentifier:(id)a4;

@end
