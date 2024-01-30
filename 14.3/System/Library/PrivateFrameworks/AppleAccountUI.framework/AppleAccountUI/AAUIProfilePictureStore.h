@class CNContactStore, CNMonogrammer, NSOperationQueue, ACAccount, AAGrandSlamSigner, ACAccountStore;
@protocol NSObject;

@interface AAUIProfilePictureStore : NSObject {
    ACAccount *_account;
    ACAccountStore *_accountStore;
    AAGrandSlamSigner *_grandSlamSigner;
    CNContactStore *_contactStore;
    id<NSObject> _contactStoreDidChangeObserver;
    CNMonogrammer *_monogrammer;
    NSOperationQueue *_networkingQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _monogrammerLock;
}

@property (nonatomic) double pictureDiameter;
@property (nonatomic) long long monogramType;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_monogrammer;
- (id)profilePictureForFamilyMember:(id)a0;
- (id)initWithGrandSlamSigner:(id)a0;
- (id)initWithAppleAccount:(id)a0 grandSlamAccount:(id)a1 accountStore:(id)a2;
- (void)_contactStoreDidChange:(id)a0;
- (id)profilePictureForAccountOwnerWithoutMonogramFallback;
- (void)setPictureStyle:(long long)a0;
- (void)_beginObservingContactStoreDidChangeNotifications;
- (id)initWithAppleAccount:(id)a0 grandSlamSigner:(id)a1;
- (void)_endObservingContactStoreDidChangeNotifications;
- (void)_invalidateMonogrammer;
- (id)_fallbackProfilePictureForPersonWithFirstName:(id)a0 lastName:(id)a1;
- (id)_correctlySizedImageFromImage:(id)a0;
- (id)_meCardPicture;
- (void)_fetchProfilePictureForAccountOwnerFromServer:(id)a0 serverCacheTag:(id)a1 completion:(id /* block */)a2;
- (BOOL)_contactSyncsWithiCloud:(id)a0 error:(id *)a1;
- (void)_updateServerProfilePictureForAccountOwner:(id)a0 cropRect:(id)a1;
- (id)_profilePictureForFamilyMemberWithoutMonogramFallback:(id)a0;
- (id)_familyMemberPersonPicture:(id)a0;
- (void)_fetchProfilePictureForFamilyMemberFromServer:(id)a0 serverCacheTag:(id)a1 completion:(id /* block */)a2;
- (void)_fetchAndCacheRawImageAndCropRectWithRequest:(id)a0 personID:(id)a1 completion:(id /* block */)a2;
- (void)_meCardRawImageAndCropRect:(id /* block */)a0;
- (void)_familyMember:(id)a0 rawImageAndCropRect:(id /* block */)a1;
- (void)_fetchProfilePictureSupersetWithRequest:(id)a0 personID:(id)a1 completion:(id /* block */)a2;
- (void)_fetchProfilePictureWithRequest:(id)a0 personID:(id)a1 completion:(id /* block */)a2;
- (id)cacheablePictureForPicture:(id)a0 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)_monogrammedContactImage:(id)a0;
- (void)_decodeImageAndCropRectForContact:(id)a0 completion:(id /* block */)a1;
- (id)_contactWithImageDataMatchingFamilyMember:(id)a0 error:(id *)a1;
- (id)_getAccountIdentifierForContact:(id)a0 error:(id *)a1;
- (void)_updateServerProfilePictureWithRequest:(id)a0;
- (id)_profilePictureForPicture:(id)a0 crop:(BOOL)a1 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 cacheable:(BOOL)a3;
- (id)initWithAppleAccount:(id)a0 store:(id)a1;
- (long long)pictureStyle;
- (id)profilePictureForAccountOwner;
- (void)fetchProfilePictureForAccountOwner:(id /* block */)a0;
- (void)setProfilePictureForAccountOwner:(id)a0 cropRect:(id)a1;
- (void)fetchProfilePictureForFamilyMember:(id)a0 completion:(id /* block */)a1;
- (void)fetchRawImageAndCropRectForAccountOwner:(id /* block */)a0;
- (void)fetchRawImageAndCropRectForFamilyMember:(id)a0 completion:(id /* block */)a1;
- (id)profilePictureForPicture:(id)a0;
- (id)profilePictureForPicture:(id)a0 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
