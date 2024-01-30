@class NSString, NSDictionary, NSURL, NSDate, NSNumber;

@interface WFWunderlistFile : MTLModel <MTLJSONSerializing>

@property (readonly, nonatomic) long long fileId;
@property (readonly, nonatomic) long long taskId;
@property (readonly, nonatomic) long long listId;
@property (readonly, nonatomic) long long userId;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *filename;
@property (readonly, nonatomic) NSNumber *fileSize;
@property (readonly, nonatomic) NSDate *localCreatedAt;
@property (readonly, nonatomic) NSDate *createdAt;
@property (readonly, nonatomic) NSDate *updatedAt;
@property (readonly, nonatomic) long long revision;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)urlJSONTransformer;
+ (id)createdAtJSONTransformer;
+ (id)updatedAtJSONTransformer;
+ (id)localCreatedAtJSONTransformer;

- (void).cxx_destruct;

@end
