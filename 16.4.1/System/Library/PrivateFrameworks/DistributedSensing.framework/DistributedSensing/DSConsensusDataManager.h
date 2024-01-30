@class NSMutableDictionary, NSMutableArray;

@interface DSConsensusDataManager : NSObject {
    double _windowOfInterest;
}

@property (retain, nonatomic) NSMutableDictionary *consensusDataArrayMap;
@property (retain, nonatomic) NSMutableArray *consensusDataArray;
@property (retain, nonatomic) NSMutableDictionary *consensusFrequencyTable;

- (void).cxx_destruct;
- (void)_removeDatumFromFrequencyTable:(id)a0;
- (void)_addDatumToFrequencyTable:(id)a0;
- (void)_addDatumtoDataArrayMap:(id)a0;
- (void)_evictOldestDatum;
- (void)_removeDatumFromDataArrayMap:(id)a0;
- (void)addDatum:(id)a0;
- (id)initWithWindowOfInterest:(double)a0;
- (void)printConsensusData;
- (void)printConsensusDataFromWindowStart:(double)a0 ToWindowEnd:(double)a1;

@end
