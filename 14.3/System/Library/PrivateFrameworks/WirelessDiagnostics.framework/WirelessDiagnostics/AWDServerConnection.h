@interface AWDServerConnection : NSObject {
    struct AWDServerConnection { struct shared_ptr<awd::ServerConnectionInfo> { struct ServerConnectionInfo *x0; struct __shared_weak_count *x1; } x0; } *fServerConnection;
}

- (BOOL)registerQueriableMetricCallback:(id /* block */)a0 forIdentifier:(unsigned int)a1;
- (void)registerComponentParametersChangeCallback:(id /* block */)a0;
- (void)dealloc;
- (id)newMetricContainerWithIdentifier:(unsigned int)a0;
- (unsigned long long)getAWDTimestamp;
- (BOOL)registerConfigChangeCallback:(id /* block */)a0;
- (id)getComponentConfigurationParameters;
- (void)flushToQueue:(struct dispatch_queue_s { } *)a0 block:(id /* block */)a1;
- (id)initWithComponentId:(unsigned int)a0;
- (BOOL)submitMetric:(id)a0;
- (id)initWithComponentId:(unsigned int)a0 andBlockOnConfiguration:(BOOL)a1;
- (BOOL)registerQueriableMetric:(unsigned int)a0 callback:(id /* block */)a1;

@end
