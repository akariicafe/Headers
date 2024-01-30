@class NSArray, GDPersonNameComponents, NSDateComponents;

@interface GDVisualIdentifierViewPerson : GDPerson

@property (retain, nonatomic) NSArray *locations;
@property (readonly, nonatomic) NSArray *postalAddressLinks;
@property (readonly, nonatomic) NSArray *names;
@property (readonly, nonatomic) GDPersonNameComponents *nameComponents;
@property (readonly, nonatomic) NSArray *phoneNumbers;
@property (readonly, nonatomic) NSArray *emails;
@property (readonly, nonatomic) NSDateComponents *dateOfBirth;
@property (readonly, nonatomic) NSDateComponents *nonGregorianDateOfBirth;
@property (readonly, nonatomic) NSDateComponents *anniversary;
@property (readonly, nonatomic) NSArray *relatedPeople;
@property (readonly, nonatomic) NSArray *contactIdentifiers;
@property (readonly, nonatomic) NSArray *conversationIdentifiers;
@property (readonly, nonatomic) NSArray *bundleIdentifiers;
@property (readonly, nonatomic) NSArray *visualIdentifiers;
@property (readonly, nonatomic) NSArray *visualIdentifierObjects;

- (id)description;
- (void).cxx_destruct;
- (id)shortArrayDescription:(id)a0;

@end
