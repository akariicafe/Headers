@class _ANEProgramForEvaluation, NSString, NSDictionary, NSURL, _ANEInMemoryModelDescriptor, _ANEModel, _ANEClient;

@interface _ANEInMemoryModel : NSObject

@property (readonly, nonatomic) _ANEClient *sharedConnection;
@property (retain, nonatomic) NSDictionary *modelAttributes;
@property (retain, nonatomic) NSURL *modelURL;
@property (readonly, nonatomic) BOOL isMILModel;
@property (copy, nonatomic) NSString *compilerOptionsFileName;
@property (retain, nonatomic) _ANEModel *model;
@property (readonly, nonatomic) unsigned long long string_id;
@property (nonatomic) unsigned long long programHandle;
@property (nonatomic) char queueDepth;
@property (nonatomic) unsigned long long intermediateBufferHandle;
@property (retain, nonatomic) _ANEProgramForEvaluation *program;
@property (nonatomic) unsigned int perfStatsMask;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) _ANEInMemoryModelDescriptor *descriptor;
@property (readonly, copy, nonatomic) NSString *hexStringIdentifier;

+ (void)initialize;
+ (id)new;
+ (id)inMemoryModelWithDescriptor:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)compileWithQoS:(unsigned int)a0 options:(id)a1 error:(id *)a2;
- (BOOL)compiledModelExists;
- (BOOL)evaluateWithQoS:(unsigned int)a0 options:(id)a1 request:(id)a2 error:(id *)a3;
- (BOOL)loadWithQoS:(unsigned int)a0 options:(id)a1 error:(id *)a2;
- (BOOL)unloadWithQoS:(unsigned int)a0 error:(id *)a1;
- (void)purgeCompiledModel;
- (id)compilerOptionsWithOptions:(id)a0 isCompiledModelCached:(BOOL)a1;
- (id)initWithDesctiptor:(id)a0;
- (id)localModelPath;
- (BOOL)mapIOSurfacesWithRequest:(id)a0 cacheInference:(BOOL)a1 error:(id *)a2;
- (id)saveModelFiles;
- (void)unmapIOSurfacesWithRequest:(id)a0;

@end
