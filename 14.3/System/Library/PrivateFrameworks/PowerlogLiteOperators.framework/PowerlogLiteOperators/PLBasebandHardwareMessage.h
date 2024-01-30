@interface PLBasebandHardwareMessage : PLBasebandMessage

@property (nonatomic) struct _PLBasebandHWStatsHeader { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } *header;
@property (nonatomic) struct _PLBasebandHWStatsSystem { unsigned int x0; unsigned int x1; unsigned int x2[3]; } *system;
@property (nonatomic) struct _PLBasebandHWStatsARMPerf { unsigned int x0; unsigned int x1; unsigned int x2[8]; } *armPerf;
@property (nonatomic) struct _PLBasebandHWStatsMDSP { struct _PLBasebandHWOnOffComponentStats { unsigned int x0; unsigned int x1; unsigned int x2[2]; } x0; struct _PLBasebandHWOnOffComponentStats { unsigned int x0; unsigned int x1; unsigned int x2[2]; } x1; unsigned int x2; unsigned int x3; unsigned int x4[5]; } *mdsp;
@property (nonatomic) struct _PLBasebandHWOnOffComponentStats { unsigned int x0; unsigned int x1; unsigned int x2[2]; } *mdm;
@property (nonatomic) struct _PLBasebandHWStatsADSP { struct _PLBasebandHWOnOffComponentStats { unsigned int x0; unsigned int x1; unsigned int x2[2]; } x0; struct _PLBasebandHWOnOffComponentStats { unsigned int x0; unsigned int x1; unsigned int x2[2]; } x1; unsigned int x2; unsigned int x3; unsigned int x4[5]; } *adsp;
@property (nonatomic) struct _PLBasebandHWOnOffComponentStats { unsigned int x0; unsigned int x1; unsigned int x2[2]; } *adm;
@property (nonatomic) struct _PLBasebandHWOnOffComponentStats { unsigned int x0; unsigned int x1; unsigned int x2[2]; } *gps;
@property (nonatomic) struct _PLBasebandHWOnOffComponentStats { unsigned int x0; unsigned int x1; unsigned int x2[2]; } *usb;
@property (nonatomic) struct _PLBasebandHWStatsUART { struct _PLBasebandHWOnOffComponentStats { unsigned int x0; unsigned int x1; unsigned int x2[2]; } x0; struct _PLBasebandHWOnOffComponentStats { unsigned int x0; unsigned int x1; unsigned int x2[2]; } x1; } *uart;
@property (nonatomic) struct _PLBasebandHWOnOffComponentStats { unsigned int x0; unsigned int x1; unsigned int x2[2]; } *spi;
@property (nonatomic) struct _PLBasebandHWStatsRXRSSI { unsigned int x0[4]; unsigned int x1[13]; unsigned int x2[13]; } *rx;
@property (nonatomic) struct _PLBasebandHWStatsTXPower { unsigned int x0[12]; } *tx;
@property (readonly, nonatomic) unsigned int level;
@property unsigned int logDuration;
@property (readonly, nonatomic) unsigned int revision;

- (void)logWithLogger:(id)a0;
- (id)initWithData:(id)a0;
- (void)parseData:(id)a0;
- (void)logPeripheralsWithLogger:(id)a0;
- (void)logRawWithLogger:(id)a0;
- (void)logHeaderWithLogger:(id)a0;
- (id)convertUint32ArrayToNSArray:(unsigned int *)a0 ofSize:(unsigned int)a1;
- (id)convertUint64ArrayToNSArray:(unsigned long long *)a0 ofSize:(unsigned int)a1;
- (void)logProcessorWithLogger:(id)a0;
- (void)logModemAppWithLogger:(id)a0;
- (void)logRFWithLogger2:(id)a0;
- (id)convertUint8ArrayToNSArray:(char *)a0 ofSize:(unsigned int)a1;
- (id)convertUint16ArrayToNSArray:(unsigned short *)a0 ofSize:(unsigned int)a1;
- (unsigned int)sumHardwareStat:(unsigned int *)a0 ofSize:(unsigned int)a1;
- (void)formatArray:(unsigned int *)a0 ofSize:(unsigned int)a1 inString:(id)a2;
- (void)formatArray:(unsigned int *)a0 ofSize:(unsigned int)a1 inString:(id)a2 inReverse:(BOOL)a3;
- (void)formatArray:(unsigned int *)a0 ofSize:(unsigned int)a1 withMultiplier:(float)a2 inString:(id)a3 inReverse:(BOOL)a4;
- (id)convertToObjectArray:(unsigned int *)a0 ofSize:(unsigned int)a1;
- (void)formatOnOffStates:(struct _PLBasebandHWOnOffComponentStats { unsigned int x0; unsigned int x1; unsigned int x2[2]; } *)a0 inString:(id)a1;
- (void)formatArray:(unsigned int *)a0 ofSize:(unsigned int)a1 withMultiplier:(float)a2 inString:(id)a3;
- (id)convertUint32ArrayToNSArray:(unsigned int *)a0 ofSize:(unsigned int)a1 andFill:(unsigned int)a2;
- (id)convertToObjectArrayPercentage:(unsigned int *)a0 ofSize:(unsigned int)a1;

@end
