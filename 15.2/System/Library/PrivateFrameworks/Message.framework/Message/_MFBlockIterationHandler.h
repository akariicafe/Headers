@class MFActivityMonitor;

@interface _MFBlockIterationHandler : NSObject <MFSearchResultHandler, QueryProgressMonitor> {
    id /* block */ _block;
    BOOL _cancelled;
    MFActivityMonitor *_monitor;
}

- (BOOL)handleMessage:(id)a0;
- (BOOL)shouldCancel;
- (id)initWithBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
