@class NSString, NSURL, NSDate, NSNumber;

@interface FCSubscription : NSObject <FCReorderableTagSubscription>

@property (readonly, copy, nonatomic) NSString *subscriptionID;
@property (readonly, nonatomic) unsigned long long subscriptionType;
@property (readonly, copy, nonatomic) NSNumber *order;
@property (readonly, copy, nonatomic) NSDate *dateAdded;
@property (readonly, nonatomic) BOOL notificationsEnabled;
@property (readonly, nonatomic) unsigned long long zone;
@property (readonly, nonatomic) unsigned long long subscriptionOrigin;
@property (readonly, nonatomic) NSString *tagID;
@property (readonly, nonatomic) NSString *groupID;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSURL *pollingURL;
@property (readonly, nonatomic) NSString *errorMessage;
@property (readonly, nonatomic) BOOL canRetry;

+ (id)subscriptionWithSubscriptionID:(id)a0 tagID:(id)a1 type:(unsigned long long)a2 order:(id)a3 origin:(unsigned long long)a4 groupID:(id)a5 dateAdded:(id)a6 notificationsEnabled:(BOOL)a7 zone:(unsigned long long)a8;
+ (id)pendingSubscriptionWithSubscriptionID:(id)a0 url:(id)a1 title:(id)a2 pollingURL:(id)a3 dateAdded:(id)a4;
+ (id)subscriptionWithSubscriptionID:(id)a0 dictionaryRepresentation:(id)a1;

- (BOOL)isTypeTag;
- (id)initWithSubscriptionID:(id)a0 url:(id)a1 title:(id)a2 pollingURL:(id)a3 dateAdded:(id)a4;
- (BOOL)isTypePending;
- (id)initWithSubscriptionID:(id)a0 tagID:(id)a1 groupID:(id)a2 dateAdded:(id)a3 subscriptionType:(unsigned long long)a4 order:(id)a5 origin:(unsigned long long)a6 notificationsEnabled:(BOOL)a7 zone:(unsigned long long)a8;
- (id)copyWithOrder:(id)a0;
- (BOOL)isTypeMutedTag;
- (BOOL)isDeprecated;
- (BOOL)isTypeAutoFavoriteTag;
- (BOOL)isTypeGroupableTag;
- (BOOL)isTypeIgnoredTag;
- (id)asReorderableTagSubscription;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)asCKRecord;
- (unsigned long long)priority;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)comparePriority:(id)a0;

@end
