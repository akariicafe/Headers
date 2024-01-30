@class NSDictionary, NSArray;

@interface REMReminderFetchMetadata : REMFetchMetadata

@property (readonly, nonatomic) NSDictionary *subtaskCounts;
@property (readonly, nonatomic) NSArray *dueDateCounts;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDueDateCounts:(id)a0;
- (id)initWithSubtaskCounts:(id)a0;
- (id)initWithSubtaskCounts:(id)a0 dueDateCounts:(id)a1;

@end
