@class MFActivityMonitor;

@interface _MFBlockIterationHandler : NSObject <MFSearchResultHandler, QueryProgressMonitor> {
    id /* block */ _block;
    BOOL _cancelled;
    MFActivityMonitor *_monitor;
}

- (BOOL)shouldCancel;
- (void).cxx_destruct;
- (BOOL)handleMessage:(id)a0;
- (id)initWithBlock:(id /* block */)a0;

@end
