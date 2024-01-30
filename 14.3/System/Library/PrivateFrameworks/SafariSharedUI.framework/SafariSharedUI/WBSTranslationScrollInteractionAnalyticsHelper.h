@class NSString, NSDate;
@protocol WBSTranslationScrollInteractionAnalyticsHelperDelegate;

@interface WBSTranslationScrollInteractionAnalyticsHelper : NSObject <WBSTranslationScrollInteractionAnalyticsHelperDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _synchronousIvarLock;
    NSDate *_translationStartTime;
    double _firstInteractionDelayFromTranslation;
    BOOL _webViewHasInteraction;
    double _maxVisibleHeightPercentage;
}

@property (weak, nonatomic) id<WBSTranslationScrollInteractionAnalyticsHelperDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)analyticsHelper:(id)a0 submitAnalyticsWithInteractionDelay:(long long)a1 maxVisibleHeightPercentage:(float)a2;
- (void)_calculateFirstInteractionDelayAndMaxPercentageWithCompletion:(id /* block */)a0;
- (void)recordFirstInteractionIfNeeded;
- (void)updateMaxVisibleHeightPercentage:(double)a0;

@end
