@class NSString, NSConditionLock;

@interface LDAssetQuery : NSObject {
    NSString *_language;
    NSConditionLock *_conditionLock;
    BOOL _hasCompleted;
    BOOL _waitTimedOut;
}

@property (readonly) BOOL hasCompleted;

- (id)initWithLanguage:(id)a0;
- (void)dealloc;
- (BOOL)waitForCompletion;
- (void)_runInForeground:(BOOL)a0;
- (void)runInForeground;
- (void)runInBackground;

@end
