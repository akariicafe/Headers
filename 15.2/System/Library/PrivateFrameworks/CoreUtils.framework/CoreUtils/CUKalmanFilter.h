@class CUKalmanConfiguration;

@interface CUKalmanFilter : NSObject {
    CUKalmanConfiguration *_config;
}

@property (readonly, nonatomic) double stateX;
@property (readonly, nonatomic) double stateU;

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (double)updateWithValue:(double)a0;
- (double)updateWithValue:(double)a0 control:(double)a1;

@end
