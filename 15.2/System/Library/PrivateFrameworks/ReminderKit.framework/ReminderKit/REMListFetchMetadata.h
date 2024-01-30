@class NSDictionary;

@interface REMListFetchMetadata : REMFetchMetadata

@property (readonly, nonatomic) NSDictionary *incompleteReminderCounts;
@property (readonly, nonatomic) long long scheduledCount;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithIncompleteReminderCounts:(id)a0 scheduledCount:(long long)a1;

@end
