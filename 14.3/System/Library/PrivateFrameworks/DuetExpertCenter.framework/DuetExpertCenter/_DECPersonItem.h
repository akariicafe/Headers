@class NSString, CNContactProperty, CNContact;

@interface _DECPersonItem : _DECItem

@property (readonly, nonatomic) CNContact *contact;
@property (readonly, nonatomic) CNContactProperty *contactProperty;
@property (readonly, nonatomic) NSString *contactIdentifier;

+ (BOOL)supportsSecureCoding;
+ (id)_contactStore;
+ (unsigned long long)category;
+ (id)personWithContactProperty:(id)a0;
+ (id)personWithContact:(id)a0;
+ (id)personWithContactIdentifier:(id)a0;

- (id)initWithContact:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEquivalent:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithContactIdentifier:(id)a0;
- (id)initWithContactProperty:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_isEqualToDECPersonItem:(id)a0;

@end
