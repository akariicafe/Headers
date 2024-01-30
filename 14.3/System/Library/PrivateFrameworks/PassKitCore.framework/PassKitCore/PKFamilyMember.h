@class NSString, NSSet, NSDate, NSNumber;

@interface PKFamilyMember : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isMe) BOOL me;
@property (copy, nonatomic) NSString *appleID;
@property (copy, nonatomic) NSSet *appleIDAliases;
@property (copy, nonatomic) NSNumber *dsid;
@property (copy, nonatomic) NSString *altDSID;
@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *lastName;
@property (nonatomic) unsigned long long age;
@property (copy, nonatomic) NSDate *dateOfBirth;
@property (nonatomic) long long memberType;
@property (copy, nonatomic) NSDate *joinedDate;
@property (nonatomic) BOOL parentalControlsEnabled;
@property (nonatomic) BOOL askToBuyEnabled;
@property (nonatomic, getter=isChildAccount) BOOL childAccount;
@property (nonatomic, getter=isParent) BOOL parent;
@property (nonatomic, getter=isOrganizer) BOOL organizer;

- (id)labelName;
- (void).cxx_destruct;
- (BOOL)isEqualToFamilyMember:(id)a0;
- (id)initWithFAFamilyMember:(id)a0;
- (BOOL)canSharePeerPaymentAccount;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
