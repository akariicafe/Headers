@class NSString;

@interface WorkoutCore.WorkoutConfiguration : NSObject <WOPersistableObject> {
    void /* unknown type, empty encoding */ uuid;
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ activityType;
    void /* unknown type, empty encoding */ occurrence;
}

@property (nonatomic, readonly) NSString *analyticsKey;
@property (nonatomic, readonly) NSString *analyticsSubActivities;
@property (nonatomic, readonly) long long hash;

+ (id)deserializeFromPersistence:(id)a0;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)serialize;
- (void).cxx_destruct;

@end
