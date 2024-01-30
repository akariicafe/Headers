@class NSSet;

@interface COCapabilityReadResponse : COMeshResponse

@property (readonly, copy, nonatomic) NSSet *capabilities;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCapabilities:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
