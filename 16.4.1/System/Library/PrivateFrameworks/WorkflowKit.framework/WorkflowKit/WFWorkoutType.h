@class NSString;

@interface WFWorkoutType : NSObject

@property (readonly, nonatomic) unsigned long long activityType;
@property (readonly, copy, nonatomic) NSString *name;

+ (id)allTypes;

- (id)initWithActivityType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
