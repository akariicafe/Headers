@interface PLMav2BasebandHardwareMessage : PLBasebandHardwareMessage

@property (nonatomic) struct _PLMav2BasebandHWStatsRX { unsigned int x0[5][4]; unsigned int x1[5][13]; unsigned int x2[5][13]; } *rx;
@property (nonatomic) struct _PLMav2BasebandHWStatsTX { unsigned int x0[5][12]; } *tx;

- (void)logWithLogger:(id)a0;
- (id)initWithData:(id)a0;
- (void)parseData:(id)a0;
- (void)logHeaderWithLogger:(id)a0;
- (void)logRFWithLogger2:(id)a0;
- (id)indexToRAT:(unsigned long long)a0;

@end
