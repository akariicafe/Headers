@class HKSPSleepEvent;

@interface HDSPSleepEventDueMessage : HDSPSleepMessage

@property (readonly, copy, nonatomic) HKSPSleepEvent *event;

- (unsigned long long)messageType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithEvent:(id)a0 syncAnchor:(id)a1;

@end
