@class NSString, NSArray, CHRecognitionSession, CHTextInputQuery;
@protocol PKTextInputRecognitionManagerDataSource;

@interface PKTextInputRecognitionManager : NSObject <CHQueryDelegate, CHRecognitionSessionDataSource, CHTextInputQueryTargetDataSource, PKTextInputDebugStateReporting> {
    BOOL _preferOutOfProcessRecognition;
    NSArray *_recognitionLocales;
    id<PKTextInputRecognitionManagerDataSource> _currentDataSource;
    CHRecognitionSession *__recognitionSession;
    CHTextInputQuery *__textInputQuery;
    double __beganRecognitionTimestamp;
    double __lastRecognitionDuration;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *textInputTargets;

- (void)dealloc;
- (void).cxx_destruct;
- (void)fetchContentInfoForTextInputTarget:(id)a0 strokeIdentifiers:(id)a1 completion:(id /* block */)a2;
- (void)queryDidUpdateResult:(id)a0;
- (void)reportDebugStateDescription:(id /* block */)a0;
- (id)strokeProviderSnapshot;
- (id)textInputTargetForItemStableIdentifier:(id)a0 strokeIdentifiers:(id)a1;
- (id)textInputTargetForItemStableIdentifier:(id)a0 strokeIdentifiers:(id)a1 simultaneousItemStableIdentifiers:(id)a2;

@end
