@class NSDate;

@interface ATXActionCriteriaWorldState : NSObject {
    BOOL _fake;
    NSDate *_now;
    struct { unsigned char doNotDisturb : 1; unsigned char telephonyCapability : 1; unsigned char airDropCapability : 1; unsigned char airplaneMode : 1; unsigned char coreRoutineCapability : 1; unsigned char greenTeaDeviceCapability : 1; unsigned char internalBuild : 1; unsigned char lockScreen : 1; } _flags;
    struct { unsigned char now : 1; unsigned char doNotDisturb : 1; unsigned char telephonyCapability : 1; unsigned char airDropCapability : 1; unsigned char airplaneMode : 1; unsigned char coreRoutineCapability : 1; unsigned char greenTeaDeviceCapability : 1; unsigned char internalBuild : 1; unsigned char lockScreen : 1; } _have;
}

@property (copy, nonatomic) NSDate *now;
@property (nonatomic) BOOL doNotDisturb;
@property (nonatomic) BOOL telephonyCapability;
@property (nonatomic) BOOL airDropCapability;
@property (nonatomic) BOOL airplaneMode;
@property (nonatomic) BOOL coreRoutineCapability;
@property (nonatomic) BOOL greenTeaDeviceCapability;
@property (nonatomic) BOOL internalBuild;
@property (nonatomic) BOOL lockScreen;

- (id)init;
- (void).cxx_destruct;
- (id)initFake;
- (id)propertyWhitelist;

@end
