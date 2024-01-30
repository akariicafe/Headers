@class NSDateInterval, NSPredicate, NSDate;

@interface ATXActionCriteria : NSObject <NSCopying, NSSecureCoding, ATXProtoBufWrapper>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) BOOL lockScreenEligible;
@property (readonly, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) NSPredicate *predicate;

- (id)initWithProto:(id)a0;
- (BOOL)isRelevant:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)description;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 lockScreenEligible:(BOOL)a2 predicate:(id)a3;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)encodeAsProto;
- (id)json;

@end
