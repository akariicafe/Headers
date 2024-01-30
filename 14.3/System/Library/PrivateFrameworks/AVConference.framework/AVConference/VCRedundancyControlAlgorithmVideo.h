@class NSString;

@interface VCRedundancyControlAlgorithmVideo : NSObject <VCRedundancyControlAlgorithm> {
    double _packetLossPercentage;
    double _packetLossPercentageVideo;
    double _plrEnvelope;
    BOOL _isNetworkCongested;
    unsigned int _maxAllowedRedundancyPercentage;
    unsigned int _burstyLoss[8];
    unsigned int _burstyLossArraySize;
    unsigned int _burstyLossArrayIndex;
    unsigned int _redundancyMode;
    unsigned char _mediaControlInfoFECFeedbackVersion;
    struct OpaqueVCFECFeedbackAnalyzer { } *_feedbackAnalyzer;
}

@property (readonly, nonatomic) unsigned int redundancyPercentage;
@property (readonly, nonatomic) double redundancyInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (struct { double x0; double x1; int x2; double x3; double x4; })setupFeedbackAnalyzerConfig;
- (void)updateBurstyLoss:(unsigned int)a0;
- (unsigned int)computeRedundancyWithLossPercentage;
- (unsigned int)computeRedundancyWithBurstyLoss;
- (void)updateRedundancyStrategyWithNetworkStatistics:(struct { int x0; double x1; BOOL x2; BOOL x3; BOOL x4; union { struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; double x5; double x6; double x7; double x8; double x9; char x10[64]; int x11; } x0; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; double x11; double x12; unsigned int x13; unsigned int x14; double x15; unsigned int x16; BOOL x17; struct { int x0; unsigned int x1; unsigned int x2; unsigned int x3; double x4; double x5; double x6; unsigned int x7; unsigned int x8; } x18; } x1; struct { double x0; double x1; double x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned long long x8; unsigned int x9; } x2; struct { unsigned int x0; BOOL x1; BOOL x2; BOOL x3; unsigned int x4; unsigned int x5; double x6; unsigned int x7; BOOL x8; struct { int x0; unsigned int x1; unsigned int x2; unsigned int x3; double x4; double x5; double x6; unsigned int x7; unsigned int x8; } x9; } x3; struct { unsigned char x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; double x10; double x11; double x12; unsigned int x13; unsigned int x14; unsigned int x15; } x4; struct { unsigned int x0; unsigned int x1; unsigned int x2; double x3; } x5; struct { int x0; unsigned int x1; unsigned int x2; unsigned int x3; double x4; double x5; double x6; unsigned int x7; unsigned int x8; } x6; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } x7; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } x8; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; BOOL x4; unsigned int x5; unsigned int x6; unsigned int x7; } x9; struct { unsigned char x0; unsigned char x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned long long x8; int x9; unsigned int x10; } x10; } x5; })a0;
- (struct { unsigned short x0; struct { unsigned char x0; unsigned char x1; } x1[16]; })getFecLevelPerFrameSizeVector;
- (id)initWithRedundancyControllerMode:(unsigned int)a0 maxAllowedRedundancyPercentage:(unsigned int)a1 mediaControlInfoFECFeedbackVersion:(unsigned char)a2;

@end
