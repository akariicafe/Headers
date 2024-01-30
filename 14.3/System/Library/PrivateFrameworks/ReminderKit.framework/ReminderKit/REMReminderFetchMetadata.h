@class NSDictionary, NSArray;

@interface REMReminderFetchMetadata : REMFetchMetadata

@property (readonly, nonatomic) NSDictionary *subtaskCounts;
@property (readonly, nonatomic) NSArray *dueDateCounts;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithSubtaskCounts:(id)a0;
- (id)initWithDueDateCounts:(id)a0;
- (id)initWithSubtaskCounts:(id)a0 dueDateCounts:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
