@class NSString, WFDatabase;

@interface WFDatabaseWorkflowStorage : NSObject <WFWorkflowStorage>

@property (readonly, nonatomic) WFDatabase *database;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
