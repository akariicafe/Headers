@interface HMDCoordinationPingRequest : COMeshRequest

+ (BOOL)supportsSecureCoding;
+ (id)acceptableResponses;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
