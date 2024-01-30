@class NSString, NSDictionary, NSError, DMCFileAccessRepairTool;

@interface DMCDictionaryWriter : NSObject

@property (copy, nonatomic) NSError *serializeError;
@property (copy, nonatomic) NSError *writeError;
@property (copy, nonatomic) NSError *beforeWriteRepairError;
@property (copy, nonatomic) NSError *afterWriteRepairError;
@property (retain, nonatomic) DMCFileAccessRepairTool *repairTool;
@property (readonly, nonatomic) NSDictionary *dictionary;
@property (readonly, copy, nonatomic) NSString *path;

- (BOOL)writeData:(id)a0 error:(id *)a1;
- (BOOL)repairAccessIfNecessaryWithError:(id *)a0;
- (id)initWithDictionary:(id)a0 path:(id)a1;
- (void)serializeDataAndWriteToStorage;
- (id)createRepairTool;
- (BOOL)write;
- (void).cxx_destruct;
- (void)logStartOfWrite;
- (void)reset;
- (id)serializedData;
- (BOOL)didWriteSucceed;
- (void)logResultOfWrite;

@end
