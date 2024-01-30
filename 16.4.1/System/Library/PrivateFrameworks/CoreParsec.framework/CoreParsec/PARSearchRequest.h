@class NSString, NSArray, NSDictionary, SFSearchSuggestion;

@interface PARSearchRequest : PARRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *queryString;
@property (retain, nonatomic) SFSearchSuggestion *engagedSuggestion;
@property (retain, nonatomic) NSArray *completionCacheSuggestions;
@property (copy, nonatomic) NSString *previouslyEngagedQuery;
@property (copy, nonatomic) NSDictionary *topics;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *l2version;
@property (copy, nonatomic) NSString *l3version;
@property (copy, nonatomic) NSArray *localContextualSuggestions;
@property (nonatomic) long long exp;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (unsigned int)nwActivityLabel;

@end
