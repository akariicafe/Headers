@class NSString;

@interface INRestaurantGuest : INPerson <INRestaurantGuestExport>

@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *emailAddress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithPersonHandle:(id)a0 nameComponents:(id)a1 displayName:(id)a2 image:(id)a3 contactIdentifier:(id)a4 customIdentifier:(id)a5 isMe:(BOOL)a6;
- (id)_dictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (id)initWithNameComponents:(id)a0 phoneNumber:(id)a1 emailAddress:(id)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)_initWithUserInput:(id)a0 personHandle:(id)a1 nameComponents:(id)a2 displayName:(id)a3 image:(id)a4 contactIdentifier:(id)a5 customIdentifier:(id)a6 relationship:(id)a7 aliases:(id)a8 suggestionType:(long long)a9 isMe:(BOOL)a10 scoredAlternatives:(id)a11 sourceAppBundleIdentifier:(id)a12 phonemeData:(id)a13;
- (void).cxx_destruct;

@end
