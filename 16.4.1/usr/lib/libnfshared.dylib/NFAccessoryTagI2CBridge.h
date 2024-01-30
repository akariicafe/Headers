@class NSData;

@interface NFAccessoryTagI2CBridge : NFAccessoryTag

@property (readonly, nonatomic) long long type;
@property (retain, nonatomic) NSData *tagUUID;
@property (nonatomic) BOOL selected;
@property (nonatomic) int transactionCounter;

- (id)initWithDelegate:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_selectTagType0;
- (void)_bridgeType0CreateAccessoryHeaderWithBuffer:(id)a0 pageLength:(unsigned long long)a1 isLastPage:(BOOL)a2;
- (id)_bridgeType0ReadMultipleSRAMPagesWithBuffer:(id)a0;
- (id)_bridgeType0WriteOneSRAMPage:(id)a0 fragmentationSupport:(BOOL)a1 isLastPage:(BOOL)a2;
- (id)_bridgeType0WritePollForCompletionWithTimeout:(double)a0;
- (BOOL)_bridgeType0WritePollForSystemReadyWithTimeout:(double)a0 beforeWrite:(BOOL)a1 outError:(id *)a2;
- (id)_readFromBridgeType0:(id *)a0 fragmentationSupport:(BOOL)a1;
- (id)_type0GetSystemInfo:(id *)a0;
- (id)_type0ReadConfigRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 data:(id *)a1;
- (id)_type0ReadConfigReg:(unsigned char)a0 data:(id *)a1;
- (id)_type0ReadSRAM:(unsigned char)a0 numOfBlocks:(unsigned char)a1 data:(id *)a2;
- (id)_type0WriteConfigReg:(unsigned char)a0 data:(id)a1;
- (id)_type0WriteSRAM:(unsigned char)a0 data:(id)a1;
- (id)_writeToBridgeType0:(id)a0 fragmentationSupport:(BOOL)a1;
- (id)initWithType:(long long)a0 delegate:(id)a1;
- (id)readFromBridge:(id)a0 fragmentationSupport:(BOOL)a1 response:(id *)a2;
- (id)selectTag;
- (id)writeToBridge:(id)a0 fragmentationSupport:(BOOL)a1 response:(id *)a2;

@end
