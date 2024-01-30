@interface VUIAppDocumentUpdateEventDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL animated;

+ (id)utsk;
+ (id)entitlements;
+ (id)upNext;
+ (id)purchases;
+ (id)favorites;
+ (id)restrictions;
+ (id)accountChanged;
+ (id)settings;
+ (id)appDidBecomeActive;
+ (id)preferredVideoFormat;
+ (id)postPlay;
+ (id)playActivity;
+ (id)removeFromPlayHistory;
+ (id)playHistoryUpdated;
+ (id)clearPlayHistory;
+ (id)appRefresh;
+ (id)locationAuthorizationChanged;
+ (id)locationRetrieved;
+ (id)iamMessageReceived;

- (id)initWithEventType:(unsigned long long)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
