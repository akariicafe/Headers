@class NSString, NSNumber;

@interface CellularStateRelay : NetworkAnalyticsStateRelay

@property char nrServingCellType;
@property char nrFrequencyBand;
@property (nonatomic) BOOL ratSelectionIsNR;
@property int cellMNC;
@property int cellMCC;
@property int cellUARFCN;
@property int cellPID;
@property int cellBandInfo;
@property (retain) NSString *cellType;
@property int cellBandwidth;
@property int cellTAC;
@property int cellRSRP;
@property double cellSNR;
@property (nonatomic) BOOL cellRrcConnected;
@property (retain) NSNumber *ratSelectionMask;
@property (retain) NSString *ratSelectionCurrent;
@property (retain) NSString *ratSelectionPreferred;
@property unsigned long long cellSPIType;
@property (readonly) unsigned char cellDualSimStatus;
@property (readonly) int cellNonPreferredMNC;
@property (readonly) int cellNonPreferredMCC;

- (id)extendedDescription;
- (void)updateCellInfo:(id)a0;
- (void)setCellNonPreferredMCC:(int)a0;
- (id)initForInternalType:(unsigned char)a0;
- (void)setCellNonPreferredMNC:(int)a0;
- (void).cxx_destruct;
- (void)setCellDualSimStatus:(unsigned char)a0;

@end
