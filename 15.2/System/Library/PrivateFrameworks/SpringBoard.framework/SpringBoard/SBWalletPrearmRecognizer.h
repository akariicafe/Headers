@class BSTimer;
@protocol SBWalletPrearmRecognizerDelegate;

@interface SBWalletPrearmRecognizer : NSObject {
    id<SBWalletPrearmRecognizerDelegate> _delegate;
    double _timeout;
    BSTimer *_timer;
    BOOL _invalidated;
}

- (id)initWithDelegate:(id)a0;
- (void)_invalidate;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (double)_computeDoubleTapTimeout;
- (void)_invalidateForFailureReason:(unsigned long long)a0;
- (void)_invalidateForSuccess;
- (void)startRecognizing;
- (void)menuButtonSinglePress;
- (void)menuButtonDoublePress;

@end
