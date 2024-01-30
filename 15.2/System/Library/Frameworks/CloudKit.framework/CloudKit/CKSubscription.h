@class NSString, CKNotificationInfo;

@interface CKSubscription : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *recordType;
@property (copy, nonatomic) NSString *subscriptionID;
@property (nonatomic) long long subscriptionType;
@property (copy, nonatomic) CKNotificationInfo *notificationInfo;

- (unsigned long long)subscriptionOptions;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithSubscriptionID:(id)a0 subscriptionType:(long long)a1 recordType:(id)a2;
- (id)initWithRecordType:(id)a0 predicate:(id)a1 options:(unsigned long long)a2;
- (id)zoneID;
- (id)description;
- (id)predicate;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithRecordType:(id)a0 predicate:(id)a1 subscriptionID:(id)a2 options:(unsigned long long)a3;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithZoneID:(id)a0 subscriptionID:(id)a1 options:(unsigned long long)a2;
- (id)debugDescription;
- (id)initWithZoneID:(id)a0 options:(unsigned long long)a1;

@end
