@class WFDatabaseProxy, NSString, WFWorkflowReference;

@interface WFDatabaseProxyWorkflowStorage : NSObject <WFWorkflowStorage>

@property (readonly, nonatomic) WFWorkflowReference *reference;
@property (readonly, nonatomic) WFDatabaseProxy *database;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
