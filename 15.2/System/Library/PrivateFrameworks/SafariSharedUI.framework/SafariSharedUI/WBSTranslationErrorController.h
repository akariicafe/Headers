@class NSCountedSet, NSMutableSet;
@protocol WBSTranslationErrorControllerDelegate;

@interface WBSTranslationErrorController : NSObject {
    NSCountedSet *_errorCounter;
    NSMutableSet *_errorKeysReachingThreshold;
}

@property (weak, nonatomic) id<WBSTranslationErrorControllerDelegate> delegate;

- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (id)_overriddenThresholdForError:(id)a0;
- (void)addError:(id)a0;

@end
