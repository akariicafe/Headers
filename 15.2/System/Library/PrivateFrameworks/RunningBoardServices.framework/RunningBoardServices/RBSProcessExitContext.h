@class RBSTerminateContext, RBSProcessExitStatus, NSString, NSDate;

@interface RBSProcessExitContext : NSObject <RBSXPCSecureCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) RBSProcessExitStatus *status;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) RBSTerminateContext *terminationContext;
@property (readonly, nonatomic) int legacyCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exitContextForNamespace:(unsigned int)a0 code:(unsigned long long)a1 wait4Status:(int)a2;
+ (BOOL)supportsRBSXPCSecureCoding;

- (void)encodeWithRBSXPCCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)copyWithTimestamp:(id)a0;
- (id)copyWithTerminationContext:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithStatus:(id)a0;

@end
