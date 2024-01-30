@class NSArray, NSSet, NSData, NSDate;

@interface CPLLibraryShareScopeChange : CPLScopeChange <NSSecureCoding, NSCopying> {
    NSSet *_exitingUserIdentifiers;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long exitRetentionPolicy;
@property (nonatomic) long long exitSource;
@property (copy, nonatomic) NSArray *exitingUserIdentifiers;
@property (readonly, nonatomic) long long exitState;
@property (nonatomic) long long exitType;
@property (copy, nonatomic) NSData *userDefinedRules;
@property (copy, nonatomic) NSDate *userViewedParticipantTrashNotificationDate;

+ (id)descriptionForExitState:(long long)a0;
+ (BOOL)serverSupportsLibraryShareSettingsRecordSyncing;
+ (BOOL)serverSupportsLibraryShareSettingsUserViewedParticipantTrashNotificationDateSyncing;
+ (id)cplAdditionalSecureClassesForProperty:(id)a0;
+ (id)descriptionForExitType:(long long)a0;
+ (id)mappingForExitState;
+ (id)mappingForExitType;

- (void).cxx_destruct;
- (BOOL)areSomeUsersExiting;
- (BOOL)isUserWithIdentifierExiting:(id)a0;
- (id)_additionalDescription;
- (void)addExitingUserIdentifiers:(id)a0;
- (BOOL)isCurrentUserExiting;
- (void)removePendingParticipantIDs:(id)a0;
- (BOOL)shouldAlwaysUpdateScopeInfoWhenPossible;
- (void)updateScopeFromScopeChange:(id)a0 direction:(unsigned long long)a1 didHaveChanges:(BOOL *)a2;

@end
