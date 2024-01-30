@class CAFenceHandle;

@interface BKSCAAnimationFenceHandle : BKSAnimationFenceHandle {
    CAFenceHandle *_caFence;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithXPCDictionary:(id)a0;
- (id)trigger;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)shouldIgnoreTrigger;
- (id)_initWithCAFenceHandle:(id)a0;
- (void)dealloc;
- (id)CAFenceHandle;
- (BOOL)isUsable;
- (unsigned int)CAPort;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithXPCDictionary:(id)a0;
- (unsigned long long)fenceName;
- (void)invalidate;
- (void)encodeWithCoder:(id)a0;

@end
