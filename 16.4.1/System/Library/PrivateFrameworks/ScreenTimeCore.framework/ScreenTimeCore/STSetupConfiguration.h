@class STUserID, NSSet, STOpaquePasscode;

@interface STSetupConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) BOOL userHasContacts;
@property (readonly, copy) STUserID *associatedUser;
@property (readonly) long long screenTimeState;
@property (readonly, copy) NSSet *availableScreenTimeStates;
@property (readonly, copy) STOpaquePasscode *passcode;
@property (readonly) long long contactManagementState;
@property (readonly, copy) NSSet *availableContactManagementStates;

+ (BOOL)_isContactManagementStateValid:(long long)a0 pairedWithUserHasContacts:(BOOL)a1;
+ (BOOL)_isScreenTimeStateValid:(long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)_descriptionForContactManagementStates:(id)a0;
- (id)_descriptionForScreenTimeStates:(id)a0;
- (id)_initWithUser:(id)a0 screenTimeState:(long long)a1 passcode:(id)a2 contactManagementState:(long long)a3 userHasContacts:(BOOL)a4;
- (id)configurationWithUpdatedContactManagementState:(long long)a0 error:(id *)a1;
- (id)configurationWithUpdatedPasscode:(id)a0;
- (id)configurationWithUpdatedScreenTimeState:(long long)a0 error:(id *)a1;
- (id)initWithUser:(id)a0 screenTimeState:(long long)a1 passcode:(id)a2 contactManagementState:(long long)a3 userHasContacts:(BOOL)a4 error:(id *)a5;
- (BOOL)isEqualToSetupConfiguration:(id)a0;

@end
