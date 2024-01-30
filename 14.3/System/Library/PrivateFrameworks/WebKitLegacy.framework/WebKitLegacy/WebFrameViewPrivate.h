@class WebFrame, WAKScrollView;

@interface WebFrameViewPrivate : NSObject {
    WebFrame *webFrame;
    WAKScrollView *frameScrollView;
    BOOL includedInWebKitStatistics;
}

- (void)dealloc;

@end
