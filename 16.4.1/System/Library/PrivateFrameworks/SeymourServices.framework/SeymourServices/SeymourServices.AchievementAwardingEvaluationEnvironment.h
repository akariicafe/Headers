@class NSString;

@interface SeymourServices.AchievementAwardingEvaluationEnvironment : NSObject {
    void /* unknown type, empty encoding */ session;
    void /* unknown type, empty encoding */ energyBurnedAwardingCache;
    void /* unknown type, empty encoding */ achievementDataStore;
    void /* unknown type, empty encoding */ modalityReference;
    void /* unknown type, empty encoding */ modalityIdentifier;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ sessionDuration;
@property (nonatomic, copy) NSString *modalityIdentifier;
@property (nonatomic) void /* unknown type, empty encoding */ isSessionGuided;
@property (nonatomic) void /* unknown type, empty encoding */ numberOfWorkoutsOver5Minutes;
@property (nonatomic) void /* unknown type, empty encoding */ numberOfWorkoutsOver5MinutesForModality;
@property (nonatomic) void /* unknown type, empty encoding */ numberOfGuidedWorkoutsOver5MinutesForModality;
@property (nonatomic) void /* unknown type, empty encoding */ currentWeeklyStreak;
@property (nonatomic) void /* unknown type, empty encoding */ longestWeeklyStreak;
@property (nonatomic) void /* unknown type, empty encoding */ sessionEnergyBurned;
@property (nonatomic) void /* unknown type, empty encoding */ bestEnergyBurnedOfWorkoutModality;
@property (nonatomic) void /* unknown type, empty encoding */ isSessionCompletingProgram;

- (id)valueForUndefinedKey:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
