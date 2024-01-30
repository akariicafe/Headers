@class NSDictionary;

@interface LAExtendedRequirement : NSObject <LAACLSerializable> {
    NSDictionary *_constraint;
}

@property (class, readonly) LAExtendedRequirement *applicationRemainsForegroundRequirement;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (void)encodeWithACLCoder:(id)a0;

@end
