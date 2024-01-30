@class NSString, CKNotificationInfo;

@interface CKSubscription : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *recordType;
@property (copy, nonatomic) NSString *subscriptionID;
@property (nonatomic) long long subscriptionType;
@property (copy, nonatomic) CKNotificationInfo *notificationInfo;

- (id)init;
- (id)predicate;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRecordType:(id)a0 predicate:(id)a1 subscriptionID:(id)a2 options:(unsigned long long)a3;
- (unsigned long long)subscriptionOptions;
- (id)zoneID;
- (id)initWithZoneID:(id)a0 subscriptionID:(id)a1 options:(unsigned long long)a2;
- (id)_initWithSubscriptionID:(id)a0 subscriptionType:(long long)a1 recordType:(id)a2;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithZoneID:(id)a0 options:(unsigned long long)a1;
- (id)initWithRecordType:(id)a0 predicate:(id)a1 options:(unsigned long long)a2;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;

@end
