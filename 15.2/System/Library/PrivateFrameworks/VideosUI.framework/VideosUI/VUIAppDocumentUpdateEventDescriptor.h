@interface VUIAppDocumentUpdateEventDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL animated;

+ (id)accountChanged;
+ (id)settings;
+ (id)restrictions;
+ (id)purchases;
+ (id)upNext;
+ (id)favorites;
+ (id)utsk;
+ (id)entitlements;
+ (id)preferredVideoFormat;
+ (id)postPlay;
+ (id)appDidBecomeActive;
+ (id)playActivity;
+ (id)removeFromPlayHistory;
+ (id)playHistoryUpdated;
+ (id)clearPlayHistory;
+ (id)appRefresh;
+ (id)locationAuthorizationChanged;
+ (id)locationRetrieved;
+ (id)iamMessageReceived;
+ (id)highlightsChanged;
+ (id)groupRecoCollectionVisiblityChanged;
+ (id)groupRecoUsersChanged;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEventType:(unsigned long long)a0;
- (unsigned long long)hash;

@end
