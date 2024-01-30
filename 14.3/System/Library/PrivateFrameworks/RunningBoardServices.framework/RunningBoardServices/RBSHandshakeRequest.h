@class NSSet, NSString;

@interface RBSHandshakeRequest : NSObject <RBSXPCSecureCoding>

@property (retain, nonatomic) NSSet *assertionDescriptors;
@property (nonatomic) unsigned int euid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsRBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)initWithRBSXPCCoder:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
