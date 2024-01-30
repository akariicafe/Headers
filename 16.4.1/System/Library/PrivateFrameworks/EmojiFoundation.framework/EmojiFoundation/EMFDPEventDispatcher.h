@class NSObject;
@protocol OS_dispatch_queue, EMFDPReportingDelegate;

@interface EMFDPEventDispatcher : NSObject {
    id<EMFDPReportingDelegate> _reportingDelegate;
    NSObject<OS_dispatch_queue> *_reportingBackgroundQueue;
}

- (id)initWithReportingDelegate:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)didUseEmoji:(id)a0 usageModeIdentifier:(id)a1;
- (void)didUseEmoji:(id)a0 usageModeIdentifier:(id)a1 completionHandler:(id /* block */)a2;

@end
