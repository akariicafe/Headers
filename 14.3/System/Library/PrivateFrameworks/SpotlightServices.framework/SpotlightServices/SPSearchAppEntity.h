@class NSString;

@interface SPSearchAppEntity : SPSearchEntity

@property (retain) NSString *appName;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)queryString;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)tokenText;
- (id)initWithBundleIdentifier:(id)a0 appName:(id)a1;
- (BOOL)isPeopleSearch;
- (void)appendToQuery:(id)a0 key:(id)a1 value:(id)a2 additions:(id)a3;

@end
