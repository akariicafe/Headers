@class NSString, NSNumber;

@interface CellularStateRelay : NetworkAnalyticsStateRelay

@property char nrServingCellType;
@property char nrFrequencyBand;
@property int cellMNC;
@property int cellMCC;
@property int cellUARFCN;
@property int cellPID;
@property int cellBandInfo;
@property (retain) NSString *cellType;
@property int cellBandwidth;
@property int cellTAC;
@property (nonatomic) BOOL cellRrcConnected;
@property (nonatomic) BOOL ratSelectionIsNR;
@property (retain) NSNumber *ratSelectionMask;
@property (retain) NSString *ratSelectionCurrent;
@property (retain) NSString *ratSelectionPreferred;
@property unsigned long long cellSPIType;

- (void).cxx_destruct;
- (id)initForInternalType:(long long)a0;
- (id)extendedDescription;
- (void)updateCellInfo:(id)a0;

@end
