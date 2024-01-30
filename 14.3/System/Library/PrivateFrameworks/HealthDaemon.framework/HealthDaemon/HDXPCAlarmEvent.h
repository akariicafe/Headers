@class NSString, NSDate;

@interface HDXPCAlarmEvent : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSDate *fireDate;
@property (readonly, nonatomic) BOOL isUserVisible;

+ (id)_eventWithName:(id)a0;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithName:(id)a0 fireDate:(id)a1 isUserVisible:(BOOL)a2;

@end
