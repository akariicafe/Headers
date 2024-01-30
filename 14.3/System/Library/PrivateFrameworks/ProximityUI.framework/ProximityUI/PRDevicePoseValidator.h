@class NSObject, PRPose;
@protocol OS_os_log;

@interface PRDevicePoseValidator : NSObject {
    NSObject<OS_os_log> *_logger;
}

@property (nonatomic) double maximumSpeed;
@property (retain, nonatomic) PRPose *previousPose;

- (void).cxx_destruct;
- (id)initWithMaximumSpeed:(double)a0;
- (BOOL)validatePose:(id)a0;

@end
