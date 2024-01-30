@class NSArray, REMFetchResultToken, REMFetchMetadata;

@interface REMFetchResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;
@property (readonly, nonatomic) long long count;
@property (readonly, nonatomic) NSArray *requestedObjectIDs;
@property (readonly, nonatomic) NSArray *fetchedAccountStorages;
@property (readonly, nonatomic) NSArray *fetchedListStorages;
@property (readonly, nonatomic) NSArray *fetchedReminderStorages;
@property (readonly, nonatomic) REMFetchMetadata *metadata;
@property (retain, nonatomic) REMFetchResultToken *fetchResultToken;

- (void).cxx_destruct;
- (id)initWithCount:(long long)a0;
- (id)initWithMetadata:(id)a0;
- (id)initWithAccountStorages:(id)a0 listStorages:(id)a1 reminderStorages:(id)a2 requestedObjectIDs:(id)a3 metadata:(id)a4;
- (id)initWithAccountStorages:(id)a0;
- (id)initWithListStorages:(id)a0;
- (id)initWithReminderStorages:(id)a0;
- (id)initWithRequestedObjectIDs:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(long long)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
