@class NSDate;

@interface NCMotionEvent : NSObject

@property (retain, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) long long motionType;
@property (readonly, nonatomic) BOOL isStationary;

+ (id)dateFormatter;
+ (id)eventWithType:(long long)a0 timestamp:(id)a1 stationary:(BOOL)a2;

- (id)description;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0 timestamp:(id)a1 stationary:(BOOL)a2;

@end
