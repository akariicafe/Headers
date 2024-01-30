@class NSMutableArray, ADTimeSyncParameters, ADTimeSyncJasperParameters;

@interface ADTimeSync : NSObject {
    ADTimeSyncParameters *_parameters;
    ADTimeSyncJasperParameters *_jasperParameters;
    NSMutableArray *_primaryArray;
    NSMutableArray *_secondaryArray;
}

- (void).cxx_destruct;
- (long long)reset;
- (id)initWithParameters:(id)a0;
- (id)initWithParameters:(id)a0 jasperParameters:(id)a1;
- (id)pushData:(id)a0 primaryStream:(BOOL)a1 timestamp:(double)a2 pose:(struct { void /* unknown type, empty encoding */ x0[4]; })a3;
- (double)averageTimestampFromArray:(id)a0 numberOfItems:(unsigned int)a1;
- (double)currSecondaryTimestamp;
- (BOOL)checkJasperConditions;
- (BOOL)checkOnceForSyncResults:(id)a0;
- (id)checkForSyncResults;

@end
