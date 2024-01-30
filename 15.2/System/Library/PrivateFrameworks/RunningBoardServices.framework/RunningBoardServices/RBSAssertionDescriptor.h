@class RBSAssertionIdentifier, NSString, NSArray, RBSTarget;

@interface RBSAssertionDescriptor : NSObject <RBSXPCSecureCoding, NSCopying>

@property (readonly, copy, nonatomic) RBSAssertionIdentifier *identifier;
@property (copy, nonatomic) RBSTarget *target;
@property (readonly, copy, nonatomic) NSString *explanation;
@property (readonly, copy, nonatomic) NSArray *attributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsRBSXPCSecureCoding;
+ (id)descriptorWithIdentifier:(id)a0 target:(id)a1 explanation:(id)a2 attributes:(id)a3;

- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)copyWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
