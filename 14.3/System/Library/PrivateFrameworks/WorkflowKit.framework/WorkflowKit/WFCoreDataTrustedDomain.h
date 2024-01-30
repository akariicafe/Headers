@class NSString, WFCoreDataWorkflow;

@interface WFCoreDataTrustedDomain : NSManagedObject

@property (copy, nonatomic) NSString *domain;
@property (retain, nonatomic) WFCoreDataWorkflow *shortcut;

+ (id)fetchRequest;

@end
