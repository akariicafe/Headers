@class NSArray;

@interface SCLRecurrenceSchedule : SCLSchedule {
    NSArray *_recurrences;
}

+ (BOOL)supportsSecureCoding;
+ (void)performBlockWithSharedFormatter:(id /* block */)a0;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)recurrences;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithRecurrences:(id)a0;
- (id)initWithTimeIntervals:(id)a0 repeatSchedule:(long long)a1;

@end
