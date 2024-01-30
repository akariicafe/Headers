@class KVDatasetInfo, NSObject;
@protocol KVProfileWriter;

@interface KVDatasetBuilder : NSObject {
    KVDatasetInfo *_datasetInfo;
    NSObject<KVProfileWriter> *_writer;
    unsigned int _itemCount;
}

- (id)addItem:(id)a0 error:(id *)a1;
- (BOOL)_finishWithError:(id *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDatasetInfo:(id)a0 writer:(id)a1 error:(id *)a2;

@end
