@class BMStoreStream, BMStoreConfig;

@interface BMPruner : NSObject

@property (readonly, nonatomic) BMStoreStream *storeStream;
@property (readonly, nonatomic) BMStoreConfig *storeConfig;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (void)deleteEventsPassingTest:(id /* block */)a0;
- (id)initWithStoreStream:(id)a0;
- (id)initWithStoreStream:(id)a0 config:(id)a1;
- (void)pruneStream;

@end
