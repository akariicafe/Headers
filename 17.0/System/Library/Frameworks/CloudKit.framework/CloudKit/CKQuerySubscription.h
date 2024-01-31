@class NSString, NSPredicate, CKRecordZoneID;

@interface CKQuerySubscription : CKSubscription <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *recordType;
@property (readonly, copy) NSPredicate *predicate;
@property (copy) CKRecordZoneID *zoneID;
@property (readonly) unsigned long long querySubscriptionOptions;

+ (void)initialize;

- (void)encodeWithCoder:(id)a0;
- (void)setRecordType:(id)a0;
- (id)initWithRecordType:(id)a0 predicate:(id)a1 options:(unsigned long long)a2;
- (id)CKPropertiesDescription;
- (void)setPredicate_modelMutation:(id)a0;
- (id)_predicateWithoutCopy;
- (void).cxx_destruct;
- (void)_validateQuerySubscriptionOptions:(unsigned long long)a0;
- (void)setRecordType_modelMutation:(id)a0;
- (void)setQuerySubscriptionOptions_modelMutation:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithRecordType:(id)a0 predicate:(id)a1 subscriptionID:(id)a2 options:(unsigned long long)a3;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
