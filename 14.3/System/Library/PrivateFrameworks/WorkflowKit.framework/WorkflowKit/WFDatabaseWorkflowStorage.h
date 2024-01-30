@class WFDatabase, NSString, WFWorkflowReference;

@interface WFDatabaseWorkflowStorage : NSObject <WFWorkflowStorage>

@property (readonly, nonatomic) WFWorkflowReference *descriptor;
@property (readonly, nonatomic) WFDatabase *database;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)reference;
- (BOOL)saveRecord:(id)a0 error:(id *)a1;
- (BOOL)reloadRecord:(id)a0 error:(id *)a1;
- (id)initWithDescriptor:(id)a0 database:(id)a1;

@end
