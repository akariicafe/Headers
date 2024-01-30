@class BSTimer;
@protocol SBWalletPrearmRecognizerDelegate;

@interface SBWalletPrearmRecognizer : NSObject {
    id<SBWalletPrearmRecognizerDelegate> _delegate;
    double _timeout;
    BSTimer *_timer;
    BOOL _invalidated;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)_invalidate;
- (id)initWithDelegate:(id)a0;
- (void)invalidate;
- (double)_computeDoubleTapTimeout;
- (void)_invalidateForFailureReason:(unsigned long long)a0;
- (void)_invalidateForSuccess;
- (void)startRecognizing;
- (void)menuButtonSinglePress;
- (void)menuButtonDoublePress;

@end
