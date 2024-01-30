@class NSSet, NSDateInterval, NSMutableSet, NSDate;

@interface ASCSignpostSpan : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableSet *mutableSupplementaryTags;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) unsigned long long primaryTag;
@property (readonly, copy, nonatomic) NSSet *supplementaryTags;
@property (readonly, copy, nonatomic) NSDateInterval *dateRange;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)addSupplementaryTag:(unsigned long long)a0;
- (void)beginEmitting;
- (void)endEmitting;

@end
