@interface AWDServerConnection : NSObject {
    void *fServerConnection;
}

- (BOOL)registerConfigChangeCallback:(id /* block */)a0;
- (BOOL)registerQueriableMetricCallback:(id /* block */)a0 forIdentifier:(unsigned int)a1;
- (void)flushToQueue:(struct dispatch_queue_s { } *)a0 block:(id /* block */)a1;
- (void)registerComponentParametersChangeCallback:(id /* block */)a0;
- (id)initWithComponentId:(unsigned int)a0 andBlockOnConfiguration:(BOOL)a1;
- (BOOL)registerQueriableMetric:(unsigned int)a0 callback:(id /* block */)a1;
- (BOOL)submitMetric:(id)a0;
- (id)newMetricContainerWithIdentifier:(unsigned int)a0;
- (void)dealloc;
- (id)getComponentConfigurationParameters;
- (unsigned long long)getAWDTimestamp;
- (id)initWithComponentId:(unsigned int)a0;

@end
