@class NSString, NSPredicate, NSArray;

@interface PKAddressSearchRequest : NSObject

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *fragment;
@property (retain, nonatomic) NSPredicate *predicate;
@property (retain, nonatomic) NSArray *keysToFetch;
@property (copy, nonatomic) id /* block */ contactFilter;
@property (retain, nonatomic) NSString *outputKey;

- (id)initWithPhoneNumber:(id)a0;
- (id)allKeys;
- (id)initWithPostalAddress:(id)a0;
- (void).cxx_destruct;
- (id /* block */)_contactPropertyFilterForKey:(id)a0 propertyName:(id)a1;
- (id)postalAddressKeys;
- (id)initWithFullText:(id)a0;
- (id)initWithNameComponents:(id)a0;
- (id)initWithEmailAddress:(id)a0;
- (id)contactKeys;

@end
