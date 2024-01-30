@class NSString, NSSet, NSData, WFCoreDataWorkflow, WFCoreDataRunEvent;

@interface WFCoreDataTrigger : NSManagedObject <WFRecordStorage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) BOOL enabled;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) BOOL shouldPrompt;
@property (nonatomic) int source;
@property (retain, nonatomic) NSData *suggestionData;
@property (retain, nonatomic) NSSet *events;
@property (retain, nonatomic) WFCoreDataRunEvent *runEvents;
@property (retain, nonatomic) WFCoreDataWorkflow *shortcut;

+ (id)fetchRequest;
+ (id)recordPropertyMap;

- (id)descriptor;
- (id)trigger;

@end
