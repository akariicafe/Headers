@class NSOrderedSet, NSPredicate, NSDateInterval;

@interface PPTDataRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) long long requestType;
@property (readonly) NSOrderedSet *metrics;
@property (readonly) NSPredicate *predicate;
@property (readonly) NSDateInterval *timeFilter;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithRequestType:(long long)a0 metrics:(id)a1 predicate:(id)a2 timeFilter:(id)a3;

@end
