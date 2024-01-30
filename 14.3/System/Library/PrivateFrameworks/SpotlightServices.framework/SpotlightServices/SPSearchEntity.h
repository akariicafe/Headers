@class NSString;

@interface SPSearchEntity : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *bundleIdentifier;
@property (readonly) NSString *tokenText;
@property (readonly) NSString *queryString;
@property (readonly) BOOL isPeopleSearch;
@property (readonly) BOOL isScopedAppSearch;
@property BOOL hasWords;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)searchEntityWithContactIdentifier:(id)a0;
+ (id)searchEntityWithQueryString:(id)a0 tokenText:(id)a1 preferredBundleIDs:(id)a2;
+ (id)searchEntityWithBundleIdentifier:(id)a0 appName:(id)a1;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
