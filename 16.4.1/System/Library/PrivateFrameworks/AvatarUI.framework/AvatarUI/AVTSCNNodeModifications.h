@class NSString;

@interface AVTSCNNodeModifications : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long projectionDirection;
@property (nonatomic) double fieldOfView;
@property (nonatomic) float verticalLensShift;
@property (retain, nonatomic) NSString *framingMode;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithProjectionDirection:(double)a0 fieldOfView:(double)a1 verticalLensShift:(float)a2 framingMode:(id)a3;

@end
