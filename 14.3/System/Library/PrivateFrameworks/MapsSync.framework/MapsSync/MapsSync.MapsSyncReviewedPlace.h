@class _TtC8MapsSync27MapsSyncAnonymousCredential, NSDate;

@interface MapsSync.MapsSyncReviewedPlace : MapsSync.MapsSyncBaseItem {
    void /* unknown type, empty encoding */ _muid;
    void /* unknown type, empty encoding */ _lastSuggestedReviewDate;
    void /* unknown type, empty encoding */ _hasUserReviewed;
    void /* unknown type, empty encoding */ _uploadedPhotosCount;
    void /* unknown type, empty encoding */ _anonymousCredential;
    void /* unknown type, empty encoding */ _anonymousCredentialUnstored;
}

@property (nonatomic, readonly) unsigned long long muid;
@property (nonatomic, readonly) NSDate *lastSuggestedReviewDate;
@property (nonatomic, readonly) BOOL hasUserReviewed;
@property (nonatomic, readonly) int uploadedPhotosCount;
@property (nonatomic, readonly) _TtC8MapsSync27MapsSyncAnonymousCredential *anonymousCredential;

+ (void)fetch:(long long)a0 :(long long)a1 :(id)a2 sort:(long long)a3 ascending:(BOOL)a4 completion:(id /* block */)a5;
+ (id)fetchWithMuids:(id)a0;
+ (void)fetchWithMuids:(id)a0 completion:(id /* block */)a1;

- (void)executeOnFirstSave:(id)a0;
- (void).cxx_destruct;
- (id)initWithAnonymousCredential:(id)a0;
- (id)initWithObject:(id)a0;
- (Class)mutableObjectClass;
- (void)addEditWithBlock:(id /* block */)a0;
- (void)setPropertiesWithObject:(id)a0;
- (Class)managedObjectClass;
- (BOOL)isEqual:(id)a0;

@end
