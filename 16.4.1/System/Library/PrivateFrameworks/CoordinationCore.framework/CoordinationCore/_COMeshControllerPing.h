@interface _COMeshControllerPing : COMeshRequest

@property (readonly, nonatomic) double responseTimeout;

+ (BOOL)supportsSecureCoding;

- (id)initWithTimeout:(double)a0;

@end
