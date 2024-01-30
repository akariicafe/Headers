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

+ (id)secureCodedPropertyKeys;
+ (BOOL)supportsSecureCoding;

- (void)setEmailAddresses:(id)a0;
- (BOOL)isUnderage;
- (void)dealloc;
- (id)emailAddresses;
- (void)setDefaultNickname:(BOOL)a0;
- (BOOL)isDefaultNickname;
- (id)accountName;
- (void)setAccountName:(id)a0;
- (BOOL)isPurpleBuddyAccount;
- (BOOL)isFriend;
- (BOOL)isDefaultPrivacyVisibility;
- (BOOL)isLocalPlayer;
- (id)iCloudUserID;
- (void)setICloudUserID:(id)a0;
- (id)minimalInternal;
- (void)setDefaultPrivacyVisibility:(BOOL)a0;
- (void)setUnderage:(BOOL)a0;
- (unsigned short)numberOfTurns;
- (void)setNumberOfTurns:(unsigned short)a0;
- (unsigned short)numberOfRequests;
- (unsigned short)numberOfChallenges;
- (int)defaultFamiliarity;
- (BOOL)isFindable;
- (BOOL)isPhotoPending;
- (id)facebookUserID;
- (void)setFacebookUserID:(id)a0;
- (void)setPurpleBuddyAccount:(BOOL)a0;
- (void)setFindable:(BOOL)a0;
- (void)setPhotoPending:(BOOL)a0;
- (void)setNumberOfRequests:(unsigned short)a0;
- (void)setNumberOfChallenges:(unsigned short)a0;

@end
