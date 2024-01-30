@class NSArray, NSData;

@interface NLXSchemaCDMNLContext : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *activeTasks;
@property (copy, nonatomic) NSArray *executedTasks;
@property (copy, nonatomic) NSArray *salientEntities;
@property (copy, nonatomic) NSArray *systemDialogActs;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addActiveTasks:(id)a0;
- (void)addExecutedTasks:(id)a0;
- (void)addSalientEntities:(id)a0;
- (void)addSystemDialogActs:(id)a0;
- (void)clearActiveTasks;
- (unsigned long long)activeTasksCount;
- (id)activeTasksAtIndex:(unsigned long long)a0;
- (void)clearExecutedTasks;
- (unsigned long long)executedTasksCount;
- (id)executedTasksAtIndex:(unsigned long long)a0;
- (void)clearSalientEntities;
- (unsigned long long)salientEntitiesCount;
- (id)salientEntitiesAtIndex:(unsigned long long)a0;
- (void)clearSystemDialogActs;
- (unsigned long long)systemDialogActsCount;
- (id)systemDialogActsAtIndex:(unsigned long long)a0;

@end
