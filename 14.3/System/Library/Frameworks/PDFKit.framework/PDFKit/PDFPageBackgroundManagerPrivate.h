@class NSObject, NSMutableDictionary, PDFRenderingProperties;
@protocol PDFPageBackgroundManagerDelegate, OS_dispatch_queue;

@interface PDFPageBackgroundManagerPrivate : NSObject {
    id<PDFPageBackgroundManagerDelegate> documentDelegate;
    PDFRenderingProperties *renderingProperties;
    unsigned long long activePageIndex;
    NSMutableDictionary *backgroundImageCache[3];
    NSObject<OS_dispatch_queue> *workQueue;
    BOOL isCancled;
    BOOL isWorking;
    BOOL willForceUpdate;
}

- (void).cxx_destruct;

@end
