@class NSArray, NSString;

@interface SafariWebExtensionPermissionsExplanationSection : NSObject

@property (nonatomic) long long type;
@property (copy, nonatomic) NSArray *sites;
@property (nonatomic) BOOL includesCurrentTab;
@property (nonatomic) BOOL appliesToAllSites;
@property (copy, nonatomic) NSString *extensionName;

- (id)title;
- (id)subtitle;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0 sites:(id)a1 appliesToAllSites:(BOOL)a2 includesCurrentTab:(BOOL)a3 extensionName:(id)a4;

@end
