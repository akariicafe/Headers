@class NSString, NSDictionary, NSURL, NSDate;

@interface WFWunderlistTask : MTLModel <MTLJSONSerializing>

@property (readonly, nonatomic) long long taskId;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL starred;
@property (readonly, nonatomic) NSDate *dueDate;
@property (readonly, nonatomic) long long listId;
@property (readonly, nonatomic) long long assigneeId;
@property (readonly, nonatomic) long long assignerId;
@property (readonly, nonatomic) long long createdById;
@property (readonly, nonatomic) NSDate *createdAt;
@property (readonly, nonatomic) long long revision;
@property (readonly, nonatomic) NSURL *webURL;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)dueDateJSONTransformer;
+ (id)createdAtJSONTransformer;
+ (id)starredJSONTransformer;

- (void).cxx_destruct;

@end
