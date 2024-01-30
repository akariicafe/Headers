@class NSDate;

@interface REMReminderFetchMetadataDueDateCount : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *dueDate;
@property (readonly, nonatomic) long long count;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDueDate:(id)a0 count:(long long)a1;
- (void)encodeWithCoder:(id)a0;

@end
