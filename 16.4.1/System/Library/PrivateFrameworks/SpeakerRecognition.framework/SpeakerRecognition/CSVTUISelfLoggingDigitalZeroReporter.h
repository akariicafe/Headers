@class NSString, NSUUID;

@interface CSVTUISelfLoggingDigitalZeroReporter : NSObject <CSDigitalZeroReporting> {
    NSUUID *_siriSetupID;
    int _pageNumber;
    NSString *_phId;
    int _maxNumContinuousZeros;
    int _maxNumAllowedContinuousZeros;
    BOOL _isMaxNumContinuousZerosOverThreshold;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)reportDigitalZerosWithAudioZeroRun:(float)a0;
- (void)logDigitalZeroDetectionComplete;
- (BOOL)digitalZeroDetected;
- (id)initWithSiriSetupID:(id)a0 PageNumber:(int)a1 withPhId:(id)a2;

@end
