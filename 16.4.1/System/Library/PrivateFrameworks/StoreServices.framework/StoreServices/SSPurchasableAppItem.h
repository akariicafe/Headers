@interface SSPurchasableAppItem : SSPurchasableItem

+ (id)databaseTable;
+ (id)allPropertyKeys;
+ (id)allItemsFromDatabase:(id)a0 forAccount:(long long)a1 sortedBy:(id)a2 sortAscending:(BOOL)a3;
+ (id)itemsFromDatabase:(id)a0 forAccount:(long long)a1 matching:(id)a2 sortedBy:(id)a3 sortAscending:(BOOL)a4;
+ (id)sortByNameKey;

- (id)iconURL;
- (id)accountIdentifier;
- (BOOL)isFamilyShareable;
- (BOOL)hasMessagesExtension;
- (BOOL)isPreorder;
- (BOOL)isNewsstand;
- (id)category;
- (id)bundleID;
- (id)description;
- (id)companyName;
- (id)redownloadParams;
- (long long)contentRatingFlags;
- (BOOL)is32BitOnly;
- (id)longTitle;
- (id)ovalIconURLString;
- (BOOL)supportsIPad;
- (BOOL)supportsIPhone;
- (id)humanReadableVersion;
- (long long)iTunesVersion;
- (id)iconTitle;
- (BOOL)isHiddenFromSpringBoard;
- (unsigned int)minimumOS;
- (id)requiredCapabilitiesString;

@end
