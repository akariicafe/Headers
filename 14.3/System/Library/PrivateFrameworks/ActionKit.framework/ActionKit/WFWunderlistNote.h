@class NSString, NSDictionary, NSDate;

@interface WFWunderlistNote : MTLModel <MTLJSONSerializing>

@property (readonly, nonatomic) long long noteId;
@property (readonly, nonatomic) long long taskId;
@property (readonly, nonatomic) NSString *content;
@property (readonly, nonatomic) NSDate *createdAt;
@property (readonly, nonatomic) NSDate *updatedAt;
@property (readonly, nonatomic) long long revision;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)createdAtJSONTransformer;
+ (id)updatedAtJSONTransformer;

- (void).cxx_destruct;

@end
