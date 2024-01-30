@class NSMutableArray;

@interface TSAFunctionBrowserState : TSPObject {
    NSMutableArray *mRecentFunctions;
    NSMutableArray *mBackFunctions;
    NSMutableArray *mForwardFunctions;
    unsigned short mCurrentFunction;
}

- (unsigned short)forward;
- (BOOL)canGoBack;
- (BOOL)canGoForward;
- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (unsigned short)back;
- (id)recentFunctions;
- (unsigned short)currentFunction;
- (id)allBackFunctions;
- (id)allForwardFunctions;
- (unsigned short)backByAmount:(unsigned long long)a0;
- (unsigned short)forwardByAmount:(unsigned long long)a0;
- (void)p_filterOutUnknownFunctions:(id)a0;
- (void)recordNavigationTo:(unsigned short)a0;
- (void)recordRecentFunction:(unsigned short)a0;

@end
