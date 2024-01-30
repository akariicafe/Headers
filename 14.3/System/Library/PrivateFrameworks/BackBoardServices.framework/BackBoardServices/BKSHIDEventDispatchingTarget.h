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
+ (id)systemTarget;
+ (id)targetForDeferringEnvironment:(id)a0;
+ (id)targetForPID:(int)a0 environment:(id)a1;
+ (id)focusTargetForPID:(int)a0;

- (void)appendDescriptionToFormatter:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)_initWithEnvironment:(id)a0 pid:(int)a1;
- (void)encodeWithCoder:(id)a0;

@end
