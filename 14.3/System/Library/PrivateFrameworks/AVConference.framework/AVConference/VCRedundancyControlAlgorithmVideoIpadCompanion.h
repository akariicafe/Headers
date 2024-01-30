@class NSString;

@interface VCRedundancyControlAlgorithmVideoIpadCompanion : NSObject <VCRedundancyControlAlgorithm> {
    unsigned int _packetLossPercentage;
    unsigned int _burstyLoss[500];
    unsigned int _burstyLossArraySize;
    unsigned int _burstyLossArrayIndex;
}

@property (readonly, nonatomic) unsigned int redundancyPercentage;
@property (readonly, nonatomic) double redundancyInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
