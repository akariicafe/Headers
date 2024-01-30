@class NSDate, PKFamilyMember, NSArray, NSString, NSSet, CNContact, PKCurrencyAmount, PKMerchant, PKPaymentTransactionTag, PKAccountUser, PKSearchQuery;

@interface PKPaymentTransactionGroup : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic) long long merchantCategory;
@property (retain, nonatomic) PKPaymentTransactionTag *tag;
@property (retain, nonatomic) PKMerchant *merchant;
@property (retain, nonatomic) NSSet *handles;
@property (retain, nonatomic) NSArray *regions;
@property (retain, nonatomic) PKSearchQuery *searchQuery;
@property (retain, nonatomic) PKAccountUser *accountUser;
@property (retain, nonatomic) PKFamilyMember *familyMember;
@property (readonly, nonatomic) CNContact *userContact;
@property (readonly, nonatomic) NSString *userDisplayName;
@property (nonatomic) unsigned long long transactionCount;
@property (retain, nonatomic) PKCurrencyAmount *totalAmount;
@property (retain, nonatomic) NSArray *transactions;
@property (retain, nonatomic) NSArray *groups;
@property (retain, nonatomic) NSArray *transactionTypes;
@property (nonatomic) unsigned long long secondaryType;
@property (nonatomic) unsigned long long secondaryGroupCount;
@property (readonly, nonatomic) NSString *identifier;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
