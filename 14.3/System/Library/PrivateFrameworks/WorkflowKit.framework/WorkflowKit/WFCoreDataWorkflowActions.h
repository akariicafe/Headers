@class NSData, WFCoreDataWorkflow;

@interface WFCoreDataWorkflowActions : NSManagedObject

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) WFCoreDataWorkflow *shortcut;

+ (id)fetchRequest;

@end
