@class RBSLaunchContext, NSString;

@interface RBSLaunchRequest : RBSRequest <RBSXPCSecureCoding, NSCopying>

@property (readonly, nonatomic) RBSLaunchContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsRBSXPCSecureCoding;

- (id)initWithRBSXPCCoder:(id)a0;
- (void)executeWithCallback:(id /* block */)a0;
- (BOOL)execute:(out id *)a0 assertion:(out id *)a1 error:(out id *)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)execute:(out id *)a0 error:(out id *)a1;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)execute:(out id *)a0;
- (id)initWithContext:(id)a0;
- (void).cxx_destruct;

@end
