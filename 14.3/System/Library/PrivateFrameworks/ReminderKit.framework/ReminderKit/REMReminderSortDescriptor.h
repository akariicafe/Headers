@interface REMReminderSortDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) BOOL ascending;

+ (id)sortDescriptorSortingByTitleAscending:(BOOL)a0;
+ (id)sortDescriptorSortingByCreationDateAscending:(BOOL)a0;
+ (id)sortDescriptorSortingByDueDateAscending:(BOOL)a0;
+ (id)sortDescriptorSortingByPriorityAscending:(BOOL)a0;
+ (id)sortDescriptorSortingByOrderingInListAscending:(BOOL)a0;

- (id)initWithType:(long long)a0 ascending:(BOOL)a1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
