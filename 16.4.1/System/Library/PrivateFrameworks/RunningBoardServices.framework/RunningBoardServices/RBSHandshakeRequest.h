@class NSSet, NSArray, NSString;

@interface RBSHandshakeRequest : NSObject <RBSXPCSecureCoding>

@property (retain, nonatomic) NSSet *assertionDescriptors;
@property (retain, nonatomic) NSArray *savedEndowments;
@property (nonatomic) unsigned int euid;
@property (nonatomic) unsigned int auid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsRBSXPCSecureCoding;

- (id)initWithRBSXPCCoder:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
