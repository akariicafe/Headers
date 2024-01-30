@class AWDServerConnection;

@interface SBAWDQueryableMetric : SBAWDMetric {
    AWDServerConnection *_connection;
    id /* block */ _builder;
}

- (void).cxx_destruct;
- (void)_postQueryableMetric;
- (void)registerWithDataBuilder:(id /* block */)a0;

@end
