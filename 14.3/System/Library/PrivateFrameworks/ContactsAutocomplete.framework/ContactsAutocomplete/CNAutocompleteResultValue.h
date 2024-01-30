@class NSString;

@interface CNAutocompleteResultValue : NSObject

@property (copy, nonatomic) NSString *stringForHashingMemo;
@property (copy) NSString *address;
@property long long addressType;
@property (copy) NSString *instantMessageAddressService;
@property (copy) NSString *identifier;
@property (copy) NSString *label;

+ (id)resultValueWithAddress:(id)a0 addressType:(long long)a1;
+ (id)stringForHashingValue:(id)a0;
+ (id)normalizedAddressForValue:(id)a0;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)addressTypeDescription;
- (id)stringForHashing;
- (id)stringForSorting;
- (BOOL)addressExactlyMatchesSearchTerm:(id)a0;

@end
