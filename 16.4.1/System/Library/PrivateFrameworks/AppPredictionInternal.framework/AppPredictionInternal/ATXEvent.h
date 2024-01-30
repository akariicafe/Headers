@class NSDate, NSObject;
@protocol NSSecureCoding;

@interface ATXEvent : NSObject

@property (readonly, nonatomic) NSObject<NSSecureCoding> *event;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;

+ (void)joinLaunchEvents:(id)a0 withVisits:(id)a1 block:(id /* block */)a2;

- (BOOL)isEqualToEvent:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithEvent:(id)a0 startDate:(id)a1 endDate:(id)a2;

@end
