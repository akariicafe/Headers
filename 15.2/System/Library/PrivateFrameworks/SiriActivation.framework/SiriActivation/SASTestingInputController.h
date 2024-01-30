@class SiriTestingContext;

@interface SASTestingInputController : NSObject

@property (readonly, nonatomic) SiriTestingContext *preloadedTestingInput;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)dequeuePreloadedTestingContext;
- (void)_registerForTestingNotifications;
- (void)_testingStringsDidChange:(id)a0;
- (void)_testingAudioInputPathsDidChange:(id)a0;

@end
