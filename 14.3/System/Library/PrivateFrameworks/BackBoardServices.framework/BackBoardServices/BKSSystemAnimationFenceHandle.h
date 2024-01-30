@class NSString, CAFenceHandle, BSMachPortSendRight;

@interface BKSSystemAnimationFenceHandle : BKSAnimationFenceHandle {
    unsigned long long _fenceName;
    CAFenceHandle *_caFence;
    BSMachPortSendRight *_preFence;
    BSMachPortSendRight *_preFenceTrigger;
    unsigned long long _handleName;
    int _valid;
    BOOL _shouldTrace;
    BOOL _skipSync;
}

@property (readonly, copy, nonatomic) NSString *_trace;

+ (BOOL)supportsSecureCoding;

- (id)initWithXPCDictionary:(id)a0;
- (id)trigger;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)shouldIgnoreTrigger;
- (void)dealloc;
- (id)CAFenceHandle;
- (BOOL)isUsable;
- (unsigned int)CAPort;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)_initWithFenceName:(unsigned long long)a0 fence:(id)a1 preFence:(id)a2 preFenceTrigger:(id)a3 skipSync:(BOOL)a4 shouldTrace:(BOOL)a5;
- (unsigned long long)fenceName;
- (void)invalidate;
- (void)encodeWithCoder:(id)a0;

@end
