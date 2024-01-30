@class NSString, NSArray, NSNumber;

@interface _CSContactSearchResult : NSObject

@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSArray *emailAddresses;
@property (readonly, copy, nonatomic) NSString *contactIdentifer;
@property (readonly, copy, nonatomic) NSNumber *recentsIdentifier;
@property (readonly, nonatomic) unsigned long long sourceType;
@property (readonly, nonatomic) BOOL contact;
@property (readonly, nonatomic) BOOL recent;
@property (nonatomic) unsigned long long scope;

+ (id)generateQueryStringForContact:(id)a0 filterQueries:(id)a1 inputScope:(unsigned long long)a2;

- (void).cxx_destruct;
- (id)initWithDisplayName:(id)a0 emailAddresses:(id)a1 contactIdentifier:(id)a2 recentsIdentifier:(id)a3 sourceType:(unsigned long long)a4;

@end
