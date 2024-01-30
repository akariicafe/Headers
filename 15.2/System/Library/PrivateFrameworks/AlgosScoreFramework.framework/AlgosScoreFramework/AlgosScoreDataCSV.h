@class AlgosScoreCSVReader, NSMutableDictionary;

@interface AlgosScoreDataCSV : NSObject {
    void *csvData;
}

@property (retain, nonatomic) AlgosScoreCSVReader *rawStreamData;
@property (retain, nonatomic) NSMutableDictionary *statsDict;
@property int debug;

- (void).cxx_destruct;
- (id)readData:(id)a0;
- (id)init;
- (int)transformer;
- (void)dealloc;
- (id)readData:(id)a0 catchException:(BOOL)a1;
- (void)populateScore:(id)a0;
- (void)clearStreamingData;
- (id)readDirectoryAndScore:(id)a0 score:(id)a1 options:(id)a2;

@end
