@protocol HMEEventForwarder, HMMLogEventSubmitting;

@interface HMDLoggingEventForwarder : HMFObject <HMEEventForwarder> {
    id<HMEEventForwarder> _eventForwarder;
    id<HMMLogEventSubmitting> _metricDispatcher;
}

- (void)forwardEvent:(id)a0 topic:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithEventForwarder:(id)a0 metricDispatcher:(id)a1;

@end
