@class NSString, PXForYouSuggestionAssetsDataSourceManager, NSArray, UILongPressGestureRecognizer;

@interface PXForYouSuggestionOneupGestureProvider : PXGestureProvider <UIGestureRecognizerDelegate> {
    NSArray *_gestureRecognizers;
    UILongPressGestureRecognizer *_longPressRecognizer;
}

@property (readonly, nonatomic) PXForYouSuggestionAssetsDataSourceManager *dataSourceManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)gestureRecognizers;
- (void)_handleLongPress:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithDataSourceManager:(id)a0;
- (void)hostingViewDidChange;
- (void)_createGestureRecognizersIfNeeded;
- (void)_startShowingOriginal;
- (void)_stopShowingOriginal;

@end
