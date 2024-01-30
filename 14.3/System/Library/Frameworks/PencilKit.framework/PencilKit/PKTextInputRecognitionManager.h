@class NSString, CHRecognitionSession, NSArray, CHTextInputQuery, NSLocale;
@protocol PKTextInputRecognitionManagerDataSource;

@interface PKTextInputRecognitionManager : NSObject <CHQueryDelegate, CHRecognitionSessionDataSource, CHTextInputQueryTargetDataSource, PKTextInputDebugStateReporting>

@property (retain, nonatomic) id<PKTextInputRecognitionManagerDataSource> currentDataSource;
@property (retain, nonatomic) CHRecognitionSession *_recognitionSession;
@property (retain, nonatomic) CHTextInputQuery *_textInputQuery;
@property (nonatomic) double _beganRecognitionTimestamp;
@property (nonatomic) double _lastRecognitionDuration;
@property (retain, nonatomic) NSLocale *recognitionLocale;
@property (nonatomic) BOOL preferOutOfProcessRecognition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *textInputTargets;

- (void).cxx_destruct;
- (void)dealloc;
- (void)queryDidUpdateResult:(id)a0;
- (void)reportDebugStateDescription:(id /* block */)a0;
- (void)beginRecognitionRequestWithDataSource:(id)a0;
- (void)_updateRecognitionSession;
- (void)_updateTextInputQuery;
- (void)_processQueryDidUpdateResult:(id)a0;
- (id)textInputTargetForItemStableIdentifier:(id)a0 strokeIdentifiers:(id)a1 simultaneousItemStableIdentifiers:(id)a2;
- (id)strokeProviderSnapshot;
- (id)textInputTargetForItemStableIdentifier:(id)a0 strokeIdentifiers:(id)a1;
- (void)fetchContentInfoForTextInputTarget:(id)a0 strokeIdentifiers:(id)a1 completion:(id /* block */)a2;

@end
