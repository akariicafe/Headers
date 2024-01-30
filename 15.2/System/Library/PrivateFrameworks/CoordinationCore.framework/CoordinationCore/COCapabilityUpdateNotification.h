@class NSSet;

@interface COCapabilityUpdateNotification : COMeshNotification

@property (readonly, copy, nonatomic) NSSet *capabilities;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCapabilities:(id)a0;
- (id)initWithCoder:(id)a0;

@end
