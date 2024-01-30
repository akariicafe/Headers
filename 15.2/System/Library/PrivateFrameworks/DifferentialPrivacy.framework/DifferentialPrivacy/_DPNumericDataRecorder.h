@protocol _DPDataRecorder, _DPDataRecorderKeyProperties;

@interface _DPNumericDataRecorder : NSObject

@property (readonly, nonatomic) id<_DPDataRecorder, _DPDataRecorderKeyProperties> recorder;

- (id)initWithKey:(id)a0;
- (BOOL)recordNumbersVectors:(id)a0;
- (BOOL)recordNumbersVectors:(id)a0 metadata:(id)a1;
- (BOOL)record:(id)a0 metadata:(id)a1;
- (id)description;
- (BOOL)record:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithKey:(id)a0 databaseDirectoryPath:(id)a1 readOnly:(BOOL)a2;

@end
