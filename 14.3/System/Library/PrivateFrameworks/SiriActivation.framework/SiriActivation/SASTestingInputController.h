@class SiriTestingContext;

@interface SASTestingInputController : NSObject

@property (readonly, nonatomic) SiriTestingContext *preloadedTestingInput;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)dequeuePreloadedTestingContext;
- (void)_registerForTestingNotifications;
- (void)_testingStringsDidChange:(id)a0;
- (void)_testingAudioInputPathsDidChange:(id)a0;

@end
