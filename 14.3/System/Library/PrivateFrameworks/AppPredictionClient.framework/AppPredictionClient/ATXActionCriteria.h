@class NSDateInterval, NSPredicate, NSDate;

@interface ATXActionCriteria : NSObject <NSCopying, NSSecureCoding, ATXProtoBufWrapper>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) BOOL lockScreenEligible;
@property (readonly, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) NSPredicate *predicate;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)json;
- (id)initWithProtoData:(id)a0;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 lockScreenEligible:(BOOL)a2 predicate:(id)a3;
- (id)initWithCoder:(id)a0;
- (id)initWithProto:(id)a0;
- (id)proto;
- (id)encodeAsProto;
- (id)description;
- (BOOL)isRelevant:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
