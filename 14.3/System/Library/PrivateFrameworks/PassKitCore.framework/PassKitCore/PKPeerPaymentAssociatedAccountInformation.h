@class NSSet, NSDate;

@interface PKPeerPaymentAssociatedAccountInformation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSSet *associatedAccounts;
@property (copy, nonatomic) NSSet *associatedAccountInvitations;
@property (copy, nonatomic) NSSet *associatedAccountRemovalRecords;
@property (nonatomic) double proactiveAssociatedAccountFetchPeriod;
@property (copy, nonatomic) NSDate *lastUpdated;
@property (retain, nonatomic) NSDate *nextPossibleFetchDate;
@property (nonatomic) long long backoffRetryLevel;
@property (nonatomic, getter=isAssociatedAccountStateDirty) BOOL associatedAccountStateDirty;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 lastUpdated:(id)a1;
- (void)enumerateAssociatedAccountsUsingBlock:(id /* block */)a0;
- (void)enumerateAccountInvitationsUsingBlock:(id /* block */)a0;
- (void)markAssociatedAccountRemovalRecordWithAltDSID:(id)a0 hasPresentedNotification:(BOOL)a1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)markAssociatedAccountActiveWithAltDSID:(id)a0 hasPresentedNotification:(BOOL)a1;
- (void)encodeWithCoder:(id)a0;

@end
