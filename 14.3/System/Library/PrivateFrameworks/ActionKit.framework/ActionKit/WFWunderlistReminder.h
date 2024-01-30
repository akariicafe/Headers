@class NSDictionary, NSString, NSDate;

@interface WFWunderlistReminder : MTLModel <MTLJSONSerializing>

@property (readonly, nonatomic) long long reminderId;
@property (readonly, nonatomic) NSDate *date;
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
+ (id)dateJSONTransformer;

- (void).cxx_destruct;

@end
