@class NSMutableArray;

@interface TSAFunctionBrowserState : TSPObject {
    NSMutableArray *mRecentFunctions;
    NSMutableArray *mBackFunctions;
    NSMutableArray *mForwardFunctions;
    int mCurrentFunction;
}

- (id)initWithContext:(id)a0;
- (int)back;
- (void)dealloc;
- (BOOL)canGoBack;
- (BOOL)canGoForward;
- (int)forward;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)p_filterOutUnknownFunctions:(id)a0;
- (int)backByAmount:(unsigned long long)a0;
- (int)forwardByAmount:(unsigned long long)a0;
- (id)allBackFunctions;
- (id)allForwardFunctions;
- (int)currentFunction;
- (void)recordNavigationTo:(int)a0;
- (void)recordRecentFunction:(int)a0;
- (id)recentFunctions;

@end
