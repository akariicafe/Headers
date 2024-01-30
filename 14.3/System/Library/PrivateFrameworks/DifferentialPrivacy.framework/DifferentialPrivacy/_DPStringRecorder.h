@protocol _DPDataRecorder, _DPDataRecorderKeyProperties;

@interface _DPStringRecorder : NSObject

@property (readonly, nonatomic) id<_DPDataRecorder, _DPDataRecorderKeyProperties> recorder;

- (id)init;
- (void).cxx_destruct;
- (BOOL)record:(id)a0;
- (id)description;
- (id)initWithKey:(id)a0;
- (id)initWithKey:(id)a0 databaseDirectoryPath:(id)a1 readOnly:(BOOL)a2;
- (BOOL)record:(id)a0 metadata:(id)a1;

@end
