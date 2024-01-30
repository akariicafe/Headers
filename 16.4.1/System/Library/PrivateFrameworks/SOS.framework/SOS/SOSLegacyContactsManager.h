@class FKFriendsManager;

@interface SOSLegacyContactsManager : NSObject

@property (retain, nonatomic) FKFriendsManager *friendsManager;
@property (readonly, nonatomic) BOOL SOSLegacyContactsExist;

+ (id)contactStore;
+ (void)preloadContactStoreIfNecessary;
+ (BOOL)authorizedToUseContactStore;

- (void)dealloc;
- (id)init;
- (void)contactStoreDidChange;
- (void).cxx_destruct;
- (id)SOSLegacyContacts;
- (id)SOSLegacyContactsDestinations;
- (id)_SOSDestinationsForFriend:(id)a0;
- (id)_SOSFormattedDestinationForFriend:(id)a0 withDestinationNumber:(id)a1;
- (id)_SOSFriends;
- (id)_contactFromFriend:(id)a0;

@end
