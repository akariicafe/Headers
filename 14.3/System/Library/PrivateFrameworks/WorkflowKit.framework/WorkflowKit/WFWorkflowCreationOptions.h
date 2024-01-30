@class NSString, WFWorkflowRecord;

@interface WFWorkflowCreationOptions : NSObject

@property (readonly, nonatomic) WFWorkflowRecord *record;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long location;
@property (nonatomic) BOOL deleted;
@property (copy, nonatomic) NSString *collectionIdentifier;

- (id)init;
- (void).cxx_destruct;
- (id)initWithRecord:(id)a0;

@end
