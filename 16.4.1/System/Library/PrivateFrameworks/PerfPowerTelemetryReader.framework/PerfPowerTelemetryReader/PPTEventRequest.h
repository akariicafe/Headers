@interface PPTEventRequest : PPTDataRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long limitCount;
@property (readonly) unsigned long long offsetCount;
@property (readonly) unsigned long long readDirection;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithMetrics:(id)a0 predicate:(id)a1 timeFilter:(id)a2;
- (id)initWithMetrics:(id)a0 predicate:(id)a1 timeFilter:(id)a2 limitCount:(unsigned long long)a3 offsetCount:(unsigned long long)a4;
- (id)initWithMetrics:(id)a0 predicate:(id)a1 timeFilter:(id)a2 limitCount:(unsigned long long)a3 offsetCount:(unsigned long long)a4 readDirection:(unsigned long long)a5;

@end
