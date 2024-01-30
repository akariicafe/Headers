@class WFCoreDataCollection, WFCoreDataWorkflow;

@interface WFCoreDataWorkflowIcon : NSManagedObject

@property (nonatomic) long long backgroundColorValue;
@property (nonatomic) long long glyphNumber;
@property (retain, nonatomic) WFCoreDataCollection *collection;
@property (retain, nonatomic) WFCoreDataWorkflow *workflow;

+ (id)fetchRequest;

@end
