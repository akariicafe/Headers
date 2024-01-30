@class NSArray, DDScannerServiceConfiguration;

@interface CHDataDetectorQuery : CHQuery {
    DDScannerServiceConfiguration *_dataDetectorConfiguration;
}

@property (copy, nonatomic, setter=_setFoundItems:) NSArray *foundItems;

- (void)dealloc;
- (void)stop;
- (id)debugName;
- (id)initWithRecognitionSession:(id)a0;
- (void)q_updateQueryResult;
- (id)_dataDetectorResultsForSessionResult:(id)a0;
- (void)_enumerateDetectedRangesForContextualTextResults:(id)a0 usingBlock:(id /* block */)a1;

@end
