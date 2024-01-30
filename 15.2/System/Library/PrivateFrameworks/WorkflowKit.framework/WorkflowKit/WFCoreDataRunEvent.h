@class NSString, WFCoreDataWorkflow, NSDate, WFCoreDataTrigger;

@interface WFCoreDataRunEvent : NSManagedObject <WFRecordStorage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) int outcome;
@property (copy, nonatomic) NSString *source;
@property (retain, nonatomic) WFCoreDataWorkflow *shortcut;
@property (retain, nonatomic) WFCoreDataTrigger *trigger;

+ (id)fetchRequest;

- (id)descriptor;

@end
