@class NSString, BKSHIDEventDeferringEnvironment;

@interface BKSHIDEventDispatchingTarget : NSObject <NSSecureCoding, BSDescriptionStreamable, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int pid;
@property (readonly, copy, nonatomic) BKSHIDEventDeferringEnvironment *deferringEnvironment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyboardFocusTarget;
+ (id)targetForPID:(int)a0 environment:(id)a1;
+ (id)systemTarget;
+ (id)focusTargetForPID:(int)a0;
+ (id)targetForDeferringEnvironment:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithEnvironment:(id)a0 pid:(int)a1;
- (void)appendDescriptionToFormatter:(id)a0;

@end
