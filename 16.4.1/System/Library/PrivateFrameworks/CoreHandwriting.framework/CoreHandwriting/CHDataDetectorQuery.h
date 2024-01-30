@class NSArray, DDScannerServiceConfiguration;

@interface CHDataDetectorQuery : CHQuery {
    DDScannerServiceConfiguration *_dataDetectorConfiguration;
}

@property (copy, nonatomic, setter=_setFoundItems:) NSArray *foundItems;

- (id)debugName;
- (void)stop;
- (void).cxx_destruct;
- (id)initWithRecognitionSession:(id)a0;
- (id)_dataDetectorResultsForSessionResult:(id)a0;
- (void)_enumerateDetectedRangesForContextualTextResults:(id)a0 usingBlock:(id /* block */)a1;
- (void)q_updateQueryResult;

@end
