@class NSString;

@interface ATXOnboardingStackResultCacheManager : NSObject {
    NSString *_path;
    BOOL _isiPad;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithPath:(id)a0 isiPad:(BOOL)a1;
- (id)_generateResultCacheWithWidgetCache:(id)a0;
- (BOOL)_writeOnboardingStackResultCache:(id)a0 withError:(id *)a1;
- (id)_resultFromOnboardingStacks:(id)a0;
- (BOOL)updateCacheWithActivity:(id)a0 widgetCache:(id)a1;
- (id)fetchOnboardingStackResultCacheWithError:(id *)a0;

@end
