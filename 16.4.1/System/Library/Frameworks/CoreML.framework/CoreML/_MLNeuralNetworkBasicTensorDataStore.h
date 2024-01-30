@class NSMutableData, NSString;

@interface _MLNeuralNetworkBasicTensorDataStore : NSObject <_MLNeuralNetworkTensorDataStoring>

@property (readonly, nonatomic) NSMutableData *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithData:(id)a0;
- (id)initWithContentsOfFile:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)tensorDataForOffset:(unsigned long long)a0 expectedLength:(unsigned long long)a1;
- (BOOL)writeToFile:(id)a0 error:(id *)a1;

@end
