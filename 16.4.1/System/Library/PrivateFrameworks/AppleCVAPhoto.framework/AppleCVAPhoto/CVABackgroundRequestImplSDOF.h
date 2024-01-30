@class NSDictionary, NSString;

@interface CVABackgroundRequestImplSDOF : CVABackgroundRequestImplBase <CVABackgroundRequest>

@property float simulatedFocalRatio;
@property float sourceColorGain;
@property float sourceColorLux;
@property (retain) NSDictionary *sbufMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
