@class MCFileAccessRepairTool, NSDictionary, NSString, NSError;

@interface MCDictionaryWriter : NSObject

@property (copy, nonatomic) NSError *serializeError;
@property (copy, nonatomic) NSError *writeError;
@property (copy, nonatomic) NSError *beforeWriteRepairError;
@property (copy, nonatomic) NSError *afterWriteRepairError;
@property (retain, nonatomic) MCFileAccessRepairTool *repairTool;
@property (readonly, nonatomic) NSDictionary *dictionary;
@property (readonly, copy, nonatomic) NSString *path;

- (BOOL)writeData:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 path:(id)a1;
- (void)logStartOfWrite;
- (id)createRepairTool;
- (void)logResultOfWrite;
- (void)serializeDataAndWriteToStorage;
- (BOOL)didWriteSucceed;
- (BOOL)repairAccessIfNecessaryWithError:(id *)a0;
- (void)reset;
- (BOOL)write;
- (id)serializedData;

@end
