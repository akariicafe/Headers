@class NSString, BSMachPortSendRight;

@interface BKSAnimationFenceHandle : NSObject <BSXPCCoding, NSSecureCoding, NSCopying, BSInvalidatable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BSMachPortSendRight *trigger;
@property (readonly, nonatomic) BOOL shouldIgnoreTrigger;
@property (readonly, nonatomic) unsigned long long fenceName;
@property (readonly, nonatomic, getter=isUsable) BOOL usable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newFenceHandleForCAFenceHandle:(id)a0;
+ (id)newFenceHandleForContext:(id)a0;
+ (id)newSystemFenceHandle;

- (id)initWithXPCDictionary:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)CAFenceHandle;
- (unsigned int)CAPort;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (void)encodeWithXPCDictionary:(id)a0;
- (void)invalidate;
- (void)encodeWithCoder:(id)a0;

@end
