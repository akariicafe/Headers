@class NSString, CHDataDetectorQuery;

@interface PKDataDetectorQuery : PKQuery <CHQueryDelegate>

@property (retain, nonatomic) CHDataDetectorQuery *dataDetectorQuery;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)teardown;
- (void).cxx_destruct;
- (void)dealloc;
- (void)pause;
- (void)start;
- (id)initWithRecognitionSessionManager:(id)a0;
- (void)queryDidUpdateResult:(id)a0;

@end
