@class _ANEInMemoryModelDescriptor, _ANEProgramForEvaluation, NSDictionary, _ANEClient;

@interface _ANEInMemoryModel : NSObject

@property (readonly, nonatomic) _ANEInMemoryModelDescriptor *descriptor;
@property (readonly, nonatomic) _ANEClient *sharedConnection;
@property (retain, nonatomic) NSDictionary *modelAttributes;
@property (readonly, nonatomic) unsigned long long string_id;
@property (nonatomic) unsigned long long programHandle;
@property (nonatomic) char queueDepth;
@property (retain, nonatomic) _ANEProgramForEvaluation *program;
@property (nonatomic) unsigned int perfStatsMask;
@property (nonatomic) unsigned long long state;

+ (void)initialize;
+ (id)new;
+ (id)inMemoryModelWithDescriptor:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)unloadWithQoS:(unsigned int)a0 error:(id *)a1;
- (BOOL)loadWithQoS:(unsigned int)a0 options:(id)a1 error:(id *)a2;
- (BOOL)evaluateWithQoS:(unsigned int)a0 options:(id)a1 request:(id)a2 error:(id *)a3;
- (BOOL)compiledModelExists;
- (BOOL)compileWithQoS:(unsigned int)a0 options:(id)a1 error:(id *)a2;
- (id)hexStringIdentifier;
- (id)localModelPath;
- (id)initWithDesctiptor:(id)a0;
- (id)saveModelFiles;
- (void)purgeCompiledModel;

@end
