@class RBSTerminateContext, RBSProcessExitStatus, NSString, NSDate;

@interface RBSProcessExitContext : NSObject <RBSXPCSecureCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;
@property (retain, nonatomic) RBSProcessExitStatus *status;
@property (retain, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) RBSTerminateContext *terminationContext;
@property (readonly, nonatomic) int legacyCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exitContextForNamespace:(unsigned int)a0 code:(unsigned long long)a1 wait4Status:(int)a2;
+ (BOOL)supportsRBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)initWithRBSXPCCoder:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
