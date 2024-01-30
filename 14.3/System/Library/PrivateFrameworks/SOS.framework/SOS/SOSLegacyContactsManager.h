@class FKFriendsManager;

@interface SOSLegacyContactsManager : NSObject

@property (retain, nonatomic) FKFriendsManager *friendsManager;
@property (readonly, nonatomic) BOOL SOSLegacyContactsExist;

+ (id)contactStore;
+ (BOOL)authorizedToUseContactStore;
+ (void)preloadContactStoreIfNecessary;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)SOSLegacyContacts;
- (void)contactStoreDidChange;
- (id)_SOSFriends;
- (id)_SOSDestinationsForFriend:(id)a0;
- (id)_SOSFormattedDestinationForFriend:(id)a0 withDestinationNumber:(id)a1;
- (id)_contactFromFriend:(id)a0;
- (id)SOSLegacyContactsDestinations;

@end
