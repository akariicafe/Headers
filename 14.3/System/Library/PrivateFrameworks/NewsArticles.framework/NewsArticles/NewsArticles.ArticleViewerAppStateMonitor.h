@interface NewsArticles.ArticleViewerAppStateMonitor : NSObject <SXAppStateMonitor> {
    void /* unknown type, empty encoding */ onForegroundClosures;
    void /* unknown type, empty encoding */ onEnterBackgroundClosures;
    void /* unknown type, empty encoding */ onWindowForegroundClosures;
    void /* unknown type, empty encoding */ onWindowBackgroundClosures;
}

- (void)performOnApplicationWindowDidBecomeBackground:(id /* block */)a0;
- (void)performOnApplicationWindowDidBecomeForeground:(id /* block */)a0;
- (void)performOnApplicationDidBecomeActive:(id /* block */)a0;
- (void)performOnApplicationDidEnterBackground:(id /* block */)a0;
- (void)performOnApplicationWillEnterForeground:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;

@end
