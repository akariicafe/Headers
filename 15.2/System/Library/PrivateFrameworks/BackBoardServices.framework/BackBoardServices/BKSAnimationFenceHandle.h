@class NSString, CAFenceHandle;

@interface BKSAnimationFenceHandle : NSObject <BSXPCCoding, NSSecureCoding, NSCopying, BSInvalidatable> {
    CAFenceHandle *_caFence;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long fenceName;
@property (readonly, nonatomic, getter=isUsable) BOOL usable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newFenceHandleForContext:(id)a0;
+ (id)newFenceHandleForCAFenceHandle:(id)a0;

- (unsigned int)CAPort;
- (id)initWithXPCDictionary:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_initWithCAFenceHandle:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)CAFenceHandle;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)invalidate;
- (void)dealloc;

@end
