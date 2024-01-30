@protocol _DPDataRecorder, _DPDataRecorderKeyProperties;

@interface _DPBitValueRecorder : NSObject

@property (readonly, nonatomic) id<_DPDataRecorder, _DPDataRecorderKeyProperties> recorder;

- (id)initWithKey:(id)a0;
- (BOOL)record:(id)a0;
- (BOOL)record:(id)a0 metadata:(id)a1;
- (id)init;
- (id)initWithKey:(id)a0 databaseDirectoryPath:(id)a1 readOnly:(BOOL)a2;
- (id)description;
- (BOOL)recordBitVectors:(id)a0;
- (BOOL)recordBitVectors:(id)a0 metadata:(id)a1;
- (void).cxx_destruct;

@end
