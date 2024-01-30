@class NSString, NSArray;

@interface RTContact : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *givenName;
@property (readonly, nonatomic) NSString *middleName;
@property (readonly, nonatomic) NSString *familyName;
@property (readonly, nonatomic) NSArray *postalAddresses;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)initWithIdentifier:(id)a0 givenName:(id)a1 middleName:(id)a2 familyName:(id)a3 postalAddresses:(id)a4;

@end
