@class _WKFrameHandle;

@interface SFPrintQueueItem : NSObject {
    BOOL _completed;
    id /* block */ _completionHandler;
}

@property (readonly, nonatomic) _WKFrameHandle *frameHandle;
@property (readonly, nonatomic) BOOL initiatedByWebContent;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFrameHandle:(id)a0 initiatedByWebContent:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)completeWithResult:(long long)a0;

@end
