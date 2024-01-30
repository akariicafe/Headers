@class NSArray, TabDocument, _WKRemoteObjectInterface;

@interface PageLoadTest : NSObject {
    TabDocument *_tabDocument;
    NSArray *_pagesNeedingMemoryWarningSent;
    _WKRemoteObjectInterface *_eventsListenerInterface;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)didFinishPageLoadWithLoadData:(id)a0;
- (id)initWithTabDocument:(id)a0;
- (id)initWithTabDocument:(id)a0 pagesNeedingMemoryWarningSent:(id)a1;
- (void)_setUpWebProcessForPageLoadMeasurementCollection;
- (void)_invalidateRemoteObjects;
- (void)_setUpPageLoadTestEventsListener;
- (void)_enablePageLoadMeasurementCollection;
- (void)resetAfterWebProcessCrash;

@end
