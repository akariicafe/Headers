@protocol _DPDataRecorder, _DPDataRecorderKeyProperties;

@interface _DPWordRecorder : NSObject

@property (readonly, nonatomic) id<_DPDataRecorder, _DPDataRecorderKeyProperties> recorder;
@property (readonly, nonatomic) unsigned long long wordFragmentWidth;

- (id)initWithKey:(id)a0;
- (id)description;
- (BOOL)record:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithKey:(id)a0 databaseDirectoryPath:(id)a1 readOnly:(BOOL)a2;

@end
