@class VUIAppDocumentUpdateEventDescriptor, NSDictionary;

@interface VUIAppDocumentUpdateEvent : NSObject <NSCopying>

@property (retain, nonatomic) VUIAppDocumentUpdateEventDescriptor *descriptor;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

+ (id)accountChanged;
+ (id)settings;
+ (id)restrictions;
+ (id)purchases;
+ (id)favorites;
+ (id)utsk;
+ (id)entitlements;
+ (id)preferredVideoFormat;
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
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithDescriptor:(id)a0;
- (id)coalescedEvent:(id)a0;

@end
