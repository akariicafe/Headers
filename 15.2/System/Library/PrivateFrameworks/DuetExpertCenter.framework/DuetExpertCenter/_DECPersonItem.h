@class NSString, CNContactProperty, CNContact;

@interface _DECPersonItem : _DECItem

@property (readonly, nonatomic) CNContact *contact;
@property (readonly, nonatomic) CNContactProperty *contactProperty;
@property (readonly, nonatomic) NSString *contactIdentifier;

+ (unsigned long long)category;
+ (BOOL)supportsSecureCoding;
+ (id)_contactStore;
+ (id)personWithContactProperty:(id)a0;
+ (id)personWithContact:(id)a0;
+ (id)personWithContactIdentifier:(id)a0;

- (id)initWithContact:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEquivalent:(id)a0;
- (id)initWithContactProperty:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithContactIdentifier:(id)a0;
- (unsigned long long)hash;
- (BOOL)_isEqualToDECPersonItem:(id)a0;

@end
