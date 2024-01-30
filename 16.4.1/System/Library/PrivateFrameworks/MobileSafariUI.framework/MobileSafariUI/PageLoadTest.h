@class NSArray, TabDocument, _WKRemoteObjectInterface;

@interface PageLoadTest : NSObject {
    TabDocument *_tabDocument;
    NSArray *_pagesNeedingMemoryWarningSent;
    _WKRemoteObjectInterface *_eventsListenerInterface;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)_enablePageLoadMeasurementCollection;
- (void)_invalidateRemoteObjects;
- (void)_setUpPageLoadTestEventsListener;
- (void)_setUpWebProcessForPageLoadMeasurementCollection;
- (void)didFinishPageLoadWithLoadData:(id)a0;
- (id)initWithTabDocument:(id)a0;
- (id)initWithTabDocument:(id)a0 pagesNeedingMemoryWarningSent:(id)a1;
- (void)resetAfterWebProcessCrash;

@end
