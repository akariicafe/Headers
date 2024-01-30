@class NSArray, NSDate;

@interface REMEventKitBridgingDataViewInvocation_fetchIncompleteRemindersWithDueDate : REMStoreInvocation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *listIDs;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithListIDs:(id)a0 startDate:(id)a1 endDate:(id)a2;
- (void)encodeWithCoder:(id)a0;

@end
