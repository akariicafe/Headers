@class NSTimer, NSMutableSet, UILabel, UIPDFDocument;

@interface UIPDFWidget : UIView {
    int queueIndex;
    int queueCount;
    struct { int byteCount; int currentPageCount; int renderJobsCount; BOOL memWarning; } queueData[60];
    int currentPageCount;
    int totalPageCount;
    int renderJobsCount;
    NSTimer *heartbeatTimer;
    UILabel *infoLabel;
    UIPDFDocument *activeDocument;
    NSMutableSet *trackedPages;
}

- (void)dealloc;
- (void)didReceiveMemoryWarning:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)heartbeat;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withDocument:(id)a1;
- (void)addedPageView:(int)a0;
- (void)removedPageView:(int)a0;

@end
