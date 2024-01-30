@class NSString;

@interface GKLocalPlayerInternal : GKFriendPlayerInternal {
    NSString *_accountName;
    unsigned short _numberOfRequests;
    unsigned short _numberOfTurns;
    unsigned short _numberOfChallenges;
}

@property unsigned long long loginStatus;

+ (BOOL)supportsSecureCoding;
+ (id)secureCodedPropertyKeys;

- (id)accountName;
- (void)setAccountName:(id)a0;
- (void).cxx_destruct;
- (BOOL)isUnderage;
- (int)globalFriendListAccess;
- (BOOL)hasAcknowledgedLatestGDPR;
- (BOOL)isDefaultContactsIntegrationConsent;
- (BOOL)isDefaultNickname;
- (BOOL)isDefaultPrivacyVisibility;
- (BOOL)isLocalPlayer;
- (BOOL)isPurpleBuddyAccount;
- (void)setDefaultNickname:(BOOL)a0;
- (void)setGlobalFriendListAccess:(int)a0;
- (id)minimalInternal;
- (int)defaultFamiliarity;
- (BOOL)isFindable;
- (BOOL)isFriend;
- (BOOL)isPhotoPending;
- (unsigned short)numberOfChallenges;
- (unsigned short)numberOfRequests;
- (unsigned short)numberOfTurns;
- (void)setDefaultContactsIntegrationConsent:(BOOL)a0;
- (void)setDefaultPrivacyVisibility:(BOOL)a0;
- (void)setFindable:(BOOL)a0;
- (void)setNumberOfChallenges:(unsigned short)a0;
- (void)setNumberOfRequests:(unsigned short)a0;
- (void)setNumberOfTurns:(unsigned short)a0;
- (void)setPhotoPending:(BOOL)a0;
- (void)setPurpleBuddyAccount:(BOOL)a0;
- (void)setUnderage:(BOOL)a0;

@end
