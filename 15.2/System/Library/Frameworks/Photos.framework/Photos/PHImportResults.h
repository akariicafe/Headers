@class NSError, NSMutableDictionary, NSDate, NSMutableArray, PHImportSource;

@interface PHImportResults : PHImportExceptionRecorder

@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSDate *endTime;
@property (retain, nonatomic) NSMutableDictionary *pmrInfo;
@property (retain, nonatomic) NSMutableArray *importRecords;
@property (readonly) PHImportSource *importSource;
@property (readonly) unsigned long long importedCount;
@property (readonly) unsigned long long failedToImportCount;
@property (readonly) unsigned char result;
@property (readonly) NSError *error;

+ (id)resultsWithExceptions:(id)a0;
+ (id)resultsWithException:(id)a0;

- (id)exceptions;
- (void)logPMR;
- (void)addImportRecord:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (double)runTime;
- (void)addUnsupportedPath:(id)a0;
- (id)importRecordExceptions;
- (id)generatePMRInfo;
- (void)insertStart:(id)a0 end:(id)a1 intoGroups:(id)a2 ofType:(unsigned long long)a3;
- (void)verifyGroups:(id)a0;
- (void)log:(id)a0 activity:(id)a1 description:(id)a2 digits:(unsigned long long)a3;

@end
