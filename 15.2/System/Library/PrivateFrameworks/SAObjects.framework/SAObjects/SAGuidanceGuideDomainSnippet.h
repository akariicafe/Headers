@class NSString, NSURL, NSArray;

@interface SAGuidanceGuideDomainSnippet : SAUISnippet

@property (copy, nonatomic) NSString *domainAlternateDisplayName;
@property (copy, nonatomic) NSString *domainDisplayName;
@property (copy, nonatomic) NSURL *domainIconURI;
@property (copy, nonatomic) NSString *domainName;
@property (nonatomic) BOOL enabledInOfflineMode;
@property (nonatomic) BOOL enabledInOnlineMode;
@property (copy, nonatomic) NSArray *guideSections;
@property (copy, nonatomic) NSString *iconDisplayIdentifier;
@property (nonatomic) BOOL iconNeedsProcessing;
@property (copy, nonatomic) NSString *iconResourceName;
@property (nonatomic) BOOL isAppIcon;
@property (nonatomic) BOOL performIntentEnabledAppAuthorizationCheck;
@property (copy, nonatomic) NSString *tagPhrase;

+ (id)guideDomainSnippet;
+ (id)guideDomainSnippetWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
