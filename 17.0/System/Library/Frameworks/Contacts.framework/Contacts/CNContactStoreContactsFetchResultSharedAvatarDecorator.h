@class NSArray;
@protocol CNKeyDescriptor;

@interface CNContactStoreContactsFetchResultSharedAvatarDecorator : NSObject <CNContactStoreContactsFetchResultDecorator>

@property (class, readonly) id<CNKeyDescriptor> descriptorForRequiredKeys;

@property (retain, nonatomic) NSArray *keysToFetch;
@property (nonatomic) BOOL unifyContactsFromMainStore;
@property (retain, nonatomic) NSArray *decoratedValue;
@property (retain, nonatomic) NSArray *value;

+ (id)log;
+ (BOOL)enableSharedPhoto;

- (void).cxx_destruct;
- (id)decoratedContacts:(id)a0;
- (BOOL)doesKeysToFetchContainRequiredImageKeys;
- (id)initWithContacts:(id)a0 keysToFetch:(id)a1 unifyContactsFromMainStore:(BOOL)a2;
- (id)initWithContactsFetchResult:(id)a0 keysToFetch:(id)a1 unifyContactsFromMainStore:(BOOL)a2;
- (id)nicknameForContact:(id)a0;
- (id)sharedWallpaperForContact:(id)a0 withNickname:(id)a1;
- (id)sharedWatchWallpaperImageDataForContact:(id)a0 withNickname:(id)a1;

@end
