@interface UARPStats : NSObject

@property (readonly) unsigned int packetsNoVersionAgreement;
@property (readonly) unsigned int packetsMissed;
@property (readonly) unsigned int packetsDuplicate;
@property (readonly) unsigned int packetsOutOfOrder;

- (id)initWithStatistics:(struct UARPStatistics { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } *)a0;

@end
