@class RBSProcessExitContext, NSString, RBSProcessHandle;

@interface RBSProcessExitEvent : NSObject <RBSXPCSecureCoding>

@property (retain, nonatomic) RBSProcessHandle *process;
@property (retain, nonatomic) RBSProcessExitContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsRBSXPCSecureCoding;

- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
