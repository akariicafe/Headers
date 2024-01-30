@class NSArray, NSString;

@interface SafariWebExtensionPermissionsExplanation : NSObject

@property (nonatomic) long long titleType;
@property (copy, nonatomic) NSArray *sections;
@property (nonatomic) BOOL showsEditWebsitesButton;
@property (nonatomic) BOOL showsAlwaysAllowOnEveryWebsiteButton;
@property (copy, nonatomic) NSString *extensionName;

- (id)specifiers;
- (id)initWithExtension:(id)a0;
- (id)title;
- (void).cxx_destruct;

@end
