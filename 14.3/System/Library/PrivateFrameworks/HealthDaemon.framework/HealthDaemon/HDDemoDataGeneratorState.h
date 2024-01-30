@class HDDemoDataGeneratorWorkoutConfiguration, NSDate;

@interface HDDemoDataGeneratorState : NSObject <NSSecureCoding> {
    BOOL _createdFromNSKeyedUnarchiver;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *firstSampleDate;
@property (retain, nonatomic) NSDate *lastSampleDate;
@property (retain, nonatomic) NSDate *lastRunDate;
@property (nonatomic) long long currentDay;
@property (readonly, nonatomic) NSDate *currentDate;
@property (nonatomic) double startTime;
@property (nonatomic) double currentTime;
@property (nonatomic) double endTime;
@property (nonatomic, getter=isFinished) BOOL finished;
@property (nonatomic, getter=isFirstRun) BOOL firstRun;
@property (readonly, nonatomic, getter=isExercising) BOOL exercising;
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (readonly, nonatomic, getter=isCycling) BOOL cycling;
@property (readonly, nonatomic, getter=isSwimming) BOOL swimming;
@property (readonly, nonatomic, getter=isDoingHIIT) BOOL doingHIIT;
@property (readonly, nonatomic, getter=isWalking) BOOL walking;
@property (readonly, nonatomic, getter=isDoingElliptical) BOOL doingElliptical;
@property (readonly, nonatomic, getter=isDoingYoga) BOOL doingYoga;
@property (readonly, nonatomic, getter=isHiking) BOOL hiking;
@property (readonly, nonatomic, getter=isCoreTraining) BOOL coreTraining;
@property (readonly, nonatomic, getter=isDancing) BOOL dancing;
@property (readonly, nonatomic, getter=isFunctionalStrengthTraining) BOOL functionalStrengthTraining;
@property (readonly, nonatomic, getter=isCoolingDown) BOOL coolingDown;
@property (retain, nonatomic) HDDemoDataGeneratorWorkoutConfiguration *workoutConfiguration;
@property (readonly, nonatomic) long long calendarDay;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)createdFromNSKeyedUnarchiver;
- (BOOL)isDoingCoreTraining;
- (BOOL)isDoingCardioDance;
- (BOOL)isDoingFunctionalStrengthTraining;

@end
