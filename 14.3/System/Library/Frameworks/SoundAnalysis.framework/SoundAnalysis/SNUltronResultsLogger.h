@class NSString, NSMutableArray;

@interface SNUltronResultsLogger : NSObject {
    NSString *_dateString;
    NSString *_soundIdentifier;
    BOOL _wroteResults;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _startingTime;
}

@property (readonly) NSString *directoryPath;
@property (readonly) NSString *fileNameWithoutExtension;
@property (readonly) NSMutableArray *detectionResults;

+ (id)createUltronResultsDictionaryFromDetectionResults:(id)a0;
+ (id)createUltronFinalDictionaryWithDetectionResults:(id)a0 dateString:(id)a1 fileNameWithoutExtension:(id)a2 soundIdenfifier:(id)a3 frameCount:(long long)a4;
+ (BOOL)writeDictionaryAsJSON:(id)a0 fileNameWithoutExtension:(id)a1 directoryPath:(id)a2 error:(id *)a3;

- (void).cxx_destruct;
- (void)addResult:(id)a0;
- (id)initWithDirectoryPath:(id)a0 fileNameWithoutExtension:(id)a1 dateString:(id)a2 soundIdentifier:(id)a3;
- (BOOL)writeResultsToFileWithAudioFrameCount:(long long)a0 error:(id *)a1;

@end
