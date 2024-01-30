@class NSMutableSet, NSObject;
@protocol OS_dispatch_group, SRUIFSpeechRequestHandlerDelegate;

@interface SRUIFSpeechRequestHandler : NSObject {
    id /* block */ _continuePendingRequest;
    BOOL _sendContextBeforeContinuingSpeechRequest;
    NSMutableSet *_speechRequestGroupGraveyard;
}

@property (retain, nonatomic, getter=_currentSpeechRequestGroup, setter=_setCurrentSpeechRequestGroup:) NSObject<OS_dispatch_group> *currentSpeechRequestGroup;
@property (weak, nonatomic) id<SRUIFSpeechRequestHandlerDelegate> delegate;

- (id)initWithDelegate:(id)a0;
- (void)cancelSpeechRequest;
- (void).cxx_destruct;
- (id)currentSpeechRequestDispatchGroup;
- (void)discardCurrentSpeechGroup;
- (void)nonSpeechRequestWillBegin;
- (id)prepareForNewSpeechRequest;
- (void)speechRecordingDidFail;
- (void)speechRecordingWillBegin;
- (void)startSpeechRequestWithSpeechFileAtURL:(id)a0 completion:(id /* block */)a1;
- (void)startSpeechRequestWithSpeechRequestOptions:(id)a0 instrumentationTurn:(id)a1 isInitialBringUp:(BOOL)a2 completion:(id /* block */)a3;
- (void)stopSpeechRequest;
- (void)stopSpeechRequestWithOptions:(id)a0;
- (void)updateSpeechRequestOptions:(id)a0;
- (void)_continuePendingSpeechRequest;
- (void)_performOnCurrentSpeechDipatchGroup:(id /* block */)a0;

@end
