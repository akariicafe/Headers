@class BKSHIDEventDisplay;

@interface BKSMutableHIDEventSenderDescriptor : BKSHIDEventSenderDescriptor

@property (nonatomic) long long hardwareType;
@property (copy, nonatomic) BKSHIDEventDisplay *associatedDisplay;
@property (nonatomic, getter=isAuthenticated) BOOL authenticated;
@property (nonatomic) unsigned long long senderID;

+ (id)new;

- (void)setAuthenticated:(BOOL)a0;
- (void)setHardwareType:(long long)a0;
- (id)init;
- (void)setAssociatedDisplay:(id)a0;
- (void)setSenderID:(unsigned long long)a0;
- (void)setPrimaryPage:(unsigned int)a0 primaryUsage:(unsigned int)a1;

@end
