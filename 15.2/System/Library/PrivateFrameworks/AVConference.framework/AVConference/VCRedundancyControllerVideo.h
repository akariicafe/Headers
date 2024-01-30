@class NSArray, NSString, AVCStatisticsCollector;
@protocol VCRedundancyControlAlgorithm;

@interface VCRedundancyControllerVideo : NSObject <VCRedundancyControllerProtocol> {
    id _redundancyControllerDelegate;
    AVCStatisticsCollector *_statisticsCollector;
    unsigned int _mode;
    id<VCRedundancyControlAlgorithm> _algorithm;
    unsigned int _currentRedundancyPercentage;
    BOOL _isRSUOptimizationEnabled;
    int _forceRedundancyPercentage;
    double _lastDefaultSettingLoadingTime;
    unsigned char _mediaControlInfoFECFeedbackVersion;
    int _type;
    BOOL _isNWConnectionEnabled;
    int _btNotificationHandlerIndex;
}

@property (nonatomic) unsigned long long statisticsID;
@property (readonly, nonatomic) NSArray *fecLevelPerFrameSizeVector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)convertRedundancyPercentageToRatio:(unsigned int)a0;

- (void)dealloc;
- (void)setBtNotificationMonitor;
- (void)loadDefaultSettings;
- (void)updateRedundancyStrategyWithNetworkStatistics:(struct { int x0; int x1; double x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; union { struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; double x6; double x7; double x8; double x9; double x10; char x11[64]; int x12; } x0; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; double x12; double x13; unsigned int x14; unsigned int x15; double x16; unsigned int x17; BOOL x18; struct { int x0; unsigned int x1; unsigned int x2; unsigned int x3; double x4; double x5; double x6; unsigned int x7; unsigned int x8; } x19; struct { unsigned short x0; BOOL x1; BOOL x2; unsigned int x3; } x20; } x1; struct { double x0; double x1; double x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned long long x8; unsigned int x9; } x2; struct { unsigned int x0; BOOL x1; BOOL x2; BOOL x3; unsigned int x4; unsigned int x5; double x6; unsigned int x7; BOOL x8; struct { int x0; unsigned int x1; unsigned int x2; unsigned int x3; double x4; double x5; double x6; unsigned int x7; unsigned int x8; } x9; } x3; struct { unsigned char x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; double x10; double x11; double x12; unsigned int x13; unsigned int x14; unsigned int x15; } x4; struct { unsigned int x0; unsigned int x1; unsigned int x2; double x3; } x5; struct { int x0; unsigned int x1; unsigned int x2; unsigned int x3; double x4; double x5; double x6; unsigned int x7; unsigned int x8; } x6; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } x7; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; BOOL x6; unsigned int x7; } x8; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; float x4; BOOL x5; BOOL x6; double x7; double x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned long long x12; } x9; struct { unsigned char x0; unsigned char x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned long long x8; int x9; unsigned int x10; unsigned char x11; unsigned char x12; unsigned short x13; unsigned short x14; unsigned char x15; unsigned char x16; unsigned char x17; unsigned char x18; unsigned char x19; unsigned char x20; float x21; BOOL x22; } x10; } x7; })a0;
- (void)reportRedundancyPercentage:(unsigned int)a0 redundancyInterval:(double)a1;
- (void)resetRedundancyStrategy:(struct { char *x0; unsigned long long x1; } *)a0;
- (id)initWithDelegate:(id)a0 mode:(unsigned int)a1 parameters:(struct VCRedundancyControllerVideoParameters_t { id x0; unsigned int x1; })a2;

@end
