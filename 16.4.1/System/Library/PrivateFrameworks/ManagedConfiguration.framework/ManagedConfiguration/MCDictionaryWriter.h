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
- (id)serializedData;
- (BOOL)write;
- (void)serializeDataAndWriteToStorage;
- (void)logResultOfWrite;
- (BOOL)repairAccessIfNecessaryWithError:(id *)a0;
- (void)logStartOfWrite;
- (id)createRepairTool;
- (BOOL)didWriteSucceed;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithDictionary:(id)a0 path:(id)a1;

@end
