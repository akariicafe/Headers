@class NSArray;

@interface SCLRecurrenceSchedule : SCLSchedule {
    NSArray *_recurrences;
}

+ (BOOL)supportsSecureCoding;
+ (void)performBlockWithSharedFormatter:(id /* block */)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)recurrences;
- (id)initWithRecurrences:(id)a0;
- (id)initWithTimeIntervals:(id)a0 repeatSchedule:(long long)a1;

@end
