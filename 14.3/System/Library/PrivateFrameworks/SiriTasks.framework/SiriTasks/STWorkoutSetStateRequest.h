@interface STWorkoutSetStateRequest : AFSiriRequest {
    long long _workoutState;
}

+ (BOOL)supportsSecureCoding;

- (long long)workoutState;
- (id)initWithCoder:(id)a0;
- (id)_initWithState:(long long)a0;
- (id)createResponse;
- (void)encodeWithCoder:(id)a0;

@end
