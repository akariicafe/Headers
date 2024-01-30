@class NSString, AAUIProfilePictureStore, ACAccountStore, NSObject;
@protocol OS_dispatch_queue;

@interface ASKProfilePictureStore : NSObject

@property (class, readonly, nonatomic) ASKProfilePictureStore *sharedStore;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;
@property (retain, nonatomic) ACAccountStore *accountStore;
@property (retain, nonatomic) AAUIProfilePictureStore *profilePictureStore;
@property (copy, nonatomic) NSString *primaryAccountName;
@property (copy, nonatomic) NSString *storeAccountName;
@property BOOL hasRequestedImages;

- (void)configureProfilePictureStoreAndNotifyIfNeeded;
- (void)profilePictureWithMonogramFallbackForFamilyMembers:(id)a0 pictureDiameter:(double)a1 completion:(id /* block */)a2;
- (id)_profilePictureForFamilyMember:(id)a0 withProfilePictureStore:(id)a1 usingMonogrammer:(id)a2;
- (void)profilePictureWithMonogramFallbackForFamilyMember:(id)a0 pictureDiameter:(double)a1 completion:(id /* block */)a2;
- (void)appleAccountsDidChange:(id)a0;
- (void)notifyIfNeeded;
- (void)storeAccountsDidChange:(id)a0;
- (void)profilePictureForAccountOwnerWithoutMonogramFallbackWithPictureDiameter:(double)a0 completion:(id /* block */)a1;
- (void)profilePictureStoreDidChange:(id)a0;
- (void)dealloc;
- (void)_updateMonogrammerWithDiameter:(double)a0;
- (void)_markAsHasRequestedImages;
- (id)init;
- (void).cxx_destruct;

@end
