@class HKValueHistogramCollectionQueryServerConfiguration;

@interface HDValueHistogramCollectionQueryServer : HDQueryServer {
    HKValueHistogramCollectionQueryServerConfiguration *_valueHistogramCollectionQueryServerConfiguration;
}

+ (Class)queryClass;

- (void)_queue_start;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void).cxx_destruct;

@end
