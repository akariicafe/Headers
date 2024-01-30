@class NSString, NSOutputStream;

@interface KVJSONProfileWriter : NSObject <KVProfileWriter> {
    NSOutputStream *_stream;
    unsigned int _datasetIdx;
    unsigned int _itemIdx;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithOutputStream:(id)a0;
- (BOOL)addItem:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)finishDataset:(id *)a0;
- (BOOL)finishProfile:(id *)a0;
- (BOOL)startDataset:(id)a0 error:(id *)a1;
- (BOOL)startProfile:(id)a0 error:(id *)a1;

@end
