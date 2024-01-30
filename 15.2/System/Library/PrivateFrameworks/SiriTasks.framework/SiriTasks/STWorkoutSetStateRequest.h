@interface STWorkoutSetStateRequest : AFSiriRequest {
    long long _workoutState;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)createResponse;
- (id)initWithCoder:(id)a0;
- (id)_initWithState:(long long)a0;
- (long long)workoutState;

@end
