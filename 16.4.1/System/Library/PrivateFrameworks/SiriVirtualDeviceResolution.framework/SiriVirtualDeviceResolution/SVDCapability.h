@class NSString;

@interface SVDCapability : NSObject <SVDCapabilityMatching, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)key;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_swiftBacking;
- (BOOL)matchesCapabilityDescriptions:(id)a0;

@end
