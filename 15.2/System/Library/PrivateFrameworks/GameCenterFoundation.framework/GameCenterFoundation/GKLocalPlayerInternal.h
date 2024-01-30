@class NSString, NSArray, NSNumber;

@interface GKLocalPlayerInternal : GKFriendPlayerInternal {
    NSString *_accountName;
    NSArray *_emailAddresses;
    NSString *_facebookUserID;
    NSNumber *_iCloudUserID;
    unsigned short _numberOfRequests;
    unsigned short _numberOfTurns;
    unsigned short _numberOfChallenges;
}

@property unsigned long long loginStatus;

+ (BOOL)supportsSecureCoding;
+ (id)secureCodedPropertyKeys;

- (BOOL)isFriend;
- (void)setFindable:(BOOL)a0;
- (void)setAccountName:(id)a0;
- (void)setEmailAddresses:(id)a0;
- (void)setUnderage:(BOOL)a0;
- (id)accountName;
- (BOOL)isUnderage;
- (unsigned short)numberOfChallenges;
- (BOOL)isDefaultPrivacyVisibility;
- (void)setPurpleBuddyAccount:(BOOL)a0;
- (BOOL)isLocalPlayer;
- (id)emailAddresses;
- (void)setNumberOfChallenges:(unsigned short)a0;
- (BOOL)isPhotoPending;
- (BOOL)isDefaultNickname;
- (void)setFacebookUserID:(id)a0;
- (id)facebookUserID;
- (void).cxx_destruct;
- (id)minimalInternal;
- (int)globalFriendListAccess;
- (BOOL)isPurpleBuddyAccount;
- (void)setDefaultNickname:(BOOL)a0;
- (void)setDefaultPrivacyVisibility:(BOOL)a0;
- (void)setICloudUserID:(id)a0;
- (BOOL)isFindable;
- (void)setNumberOfRequests:(unsigned short)a0;
- (int)defaultFamiliarity;
- (unsigned short)numberOfTurns;
- (void)setGlobalFriendListAccess:(int)a0;
- (void)setPhotoPending:(BOOL)a0;
- (unsigned short)numberOfRequests;
- (void)setNumberOfTurns:(unsigned short)a0;
- (id)iCloudUserID;

@end
