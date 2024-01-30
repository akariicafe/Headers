@class NSString;

@interface WBCollectionConfiguration : NSObject <NSCopying>

@property (readonly, nonatomic) long long collectionType;
@property (readonly, nonatomic) BOOL isReadonly;
@property (readonly, nonatomic) BOOL isInMemoryDatabase;
@property (readonly, nonatomic) BOOL createIfNeeded;
@property (readonly, copy, nonatomic) NSString *databasePath;
@property (nonatomic) BOOL skipsExternalNotifications;
@property (nonatomic) long long storeOwner;

+ (id)inMemoryBookmarkCollectionConfiguration;
+ (id)readonlySafariBookmarkCollectionConfiguration;
+ (id)pptTabCollectionConfiguration;
+ (id)inMemoryTabCollectionConfiguration;
+ (id)safariBookmarkCollectionConfiguration;
+ (id)safariTabCollectionConfiguration;
+ (id)readonlySafariTabCollectionConfiguration;

- (id)initWithCollectionType:(long long)a0 databasePath:(id)a1 readonly:(BOOL)a2 createIfNeeded:(BOOL)a3;
- (id)initWithCollectionType:(long long)a0 databasePath:(id)a1 readonly:(BOOL)a2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
