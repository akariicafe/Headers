@class NSString, NSArray;

@interface SPSearchSuggestionEntity : SPSearchEntity

@property (retain, nonatomic) NSString *queryString;
@property (retain, nonatomic) NSString *tokenText;
@property (retain, nonatomic) NSArray *preferredBundleIDs;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithQueryString:(id)a0 tokenText:(id)a1 preferredBundleIDs:(id)a2;

@end
