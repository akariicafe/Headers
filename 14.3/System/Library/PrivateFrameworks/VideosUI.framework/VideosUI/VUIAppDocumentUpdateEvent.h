@class VUIAppDocumentUpdateEventDescriptor, NSDictionary;

@interface VUIAppDocumentUpdateEvent : NSObject <NSCopying>

@property (retain, nonatomic) VUIAppDocumentUpdateEventDescriptor *descriptor;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

+ (id)utsk;
+ (id)entitlements;
+ (id)purchases;
+ (id)favorites;
+ (id)restrictions;
+ (id)accountChanged;
+ (id)settings;
+ (id)appDidBecomeActive;
+ (id)preferredVideoFormat;
+ (id)playActivity;
+ (id)removeFromPlayHistory;
+ (id)playHistoryUpdated;
+ (id)clearPlayHistory;
+ (id)appRefresh;
+ (id)locationAuthorizationChanged;
+ (id)locationRetrieved;
+ (id)iamMessageReceived;

- (id)initWithDescriptor:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)coalescedEvent:(id)a0;

@end
