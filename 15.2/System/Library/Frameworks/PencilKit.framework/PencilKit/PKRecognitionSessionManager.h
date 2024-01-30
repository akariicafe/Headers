@class PKRecognitionQueryController, NSString, CHRecognitionSession, NSDate, PKDrawing, NSArray, NSHashTable, NSSet, NSObject;
@protocol OS_dispatch_queue, PKRecognitionSessionManagerDelegate;

@interface PKRecognitionSessionManager : NSObject <CHRecognitionSessionDataSource, CHRecognitionSessionObserver, PKDataDetectorQueryDelegate, PKHashtagQueryDelegate, PKMentionQueryDelegate> {
    _Atomic long long _stateAtomic;
    NSObject<OS_dispatch_queue> *_recognitionSessionQueue;
    PKDrawing *_drawingForGetter;
    PKDrawing *q_drawing;
    CHRecognitionSession *q_session;
    NSDate *q_previousTime;
    NSArray *q_visibleOnscreenStrokes;
    BOOL q_wantsGrouping;
    BOOL q_wantsDataDetection;
    BOOL q_wantsHashtagDetection;
    BOOL q_wantsMentionDetection;
    BOOL q_wantsTranscription;
    PKRecognitionQueryController *q_queryController;
    NSHashTable *q_listeners;
    id<PKRecognitionSessionManagerDelegate> _delegate;
    NSSet *_mentionSuffixes;
}

@property (nonatomic) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)enabledLocales;

- (void)textInputDidChange:(id)a0;
- (id)listeners;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)dataDetectorQuery:(id)a0 foundItems:(id)a1;
- (void)hashtagQuery:(id)a0 foundItems:(id)a1;
- (void)mentionQuery:(id)a0 foundItems:(id)a1;
- (id)strokeProviderSnapshot;
- (void)recognitionSessionDidUpdateRecognitionResult:(id)a0;

@end
