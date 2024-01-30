@class NSString, CHTranscriptionQuery;

@interface PKTranscriptionQuery : PKQuery

@property (retain, nonatomic) CHTranscriptionQuery *transcriptionQuery;
@property (readonly, nonatomic) NSString *transcription;

- (void)teardown;
- (void).cxx_destruct;
- (void)dealloc;
- (void)pause;
- (void)start;
- (id)initWithRecognitionSessionManager:(id)a0;
- (id)contextualTextResultsForContextStrokes:(id)a0 completion:(id /* block */)a1 shouldCancel:(id /* block */)a2;

@end
