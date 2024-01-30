@class BMStreamDatastoreWriter;

@interface BMStoreSource : BMSource {
    BMStreamDatastoreWriter *_writer;
}

- (void).cxx_destruct;
- (void)sendEvent:(id)a0;
- (id)initWithIdentifier:(id)a0 storeConfig:(id)a1;
- (void)sendEvent:(id)a0 timestamp:(double)a1;

@end
