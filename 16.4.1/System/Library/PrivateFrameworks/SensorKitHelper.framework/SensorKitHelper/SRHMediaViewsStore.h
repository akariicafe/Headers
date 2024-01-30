@class NSXPCConnection, UIScrollView, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface SRHMediaViewsStore : NSObject {
    UIScrollView *_scrollView;
    NSMutableArray *_mediaViews;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property BOOL connectionDidInvalidate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *q;

+ (void)initialize;

- (void)setupConnection;
- (void)dealloc;
- (id)initWithScrollView:(id)a0;
- (void)addViewToStore:(id)a0;
- (void)_writeMediaEventsToBiome:(id)a0;
- (void)markViewsAsOffScreen;
- (void)markViewsAsOnScreen;
- (void)processScrollViewOffset;
- (void)removeAllViews;
- (void)removeViewFromStore:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleArea;

@end
