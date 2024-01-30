@class NSString, CAFenceHandle;

@interface BKSAnimationFenceHandle : NSObject <BSXPCCoding, BSXPCSecureCoding, NSSecureCoding, NSCopying, BSInvalidatable> {
    CAFenceHandle *_caFence;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long fenceName;
@property (readonly, nonatomic, getter=isUsable) BOOL usable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newFenceHandleForCAFenceHandle:(id)a0;
+ (BOOL)supportsBSXPCSecureCoding;
+ (id)newFenceHandleForContext:(id)a0;

- (void)encodeWithXPCDictionary:(id)a0;
- (unsigned int)CAPort;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)CAFenceHandle;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (id)_initWithCAFenceHandle:(id)a0;

@end
