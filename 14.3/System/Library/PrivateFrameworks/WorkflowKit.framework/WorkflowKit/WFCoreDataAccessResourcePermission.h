@class NSData, NSString, WFCoreDataWorkflow;

@interface WFCoreDataAccessResourcePermission : NSManagedObject

@property (retain, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) WFCoreDataWorkflow *shortcut;

+ (id)fetchRequest;

@end
