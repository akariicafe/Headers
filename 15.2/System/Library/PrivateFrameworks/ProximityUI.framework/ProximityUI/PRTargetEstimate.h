@interface PRTargetEstimate : NSObject

@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ vector;
@property (readonly, nonatomic) float uncertainty;
@property (readonly, nonatomic) float weight;
@property (readonly, nonatomic) BOOL isVerticalResolved;
@property (readonly, nonatomic) unsigned long long verticalState;

+ (id)targetEstimateWithTime:(SEL)a0 vector:(double)a1 uncertainty:(float)a2 weight:(float)a3 isResolved:(BOOL)a4 verticalState:(unsigned long long)a5;

- (id)initWithTime:(SEL)a0 vector:(double)a1 uncertainty:(float)a2 weight:(float)a3 isResolved:(BOOL)a4 verticalState:(unsigned long long)a5;

@end
