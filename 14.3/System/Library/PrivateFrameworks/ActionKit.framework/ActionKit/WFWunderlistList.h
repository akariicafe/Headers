@class NSString, NSDictionary, NSDate;

@interface WFWunderlistList : MTLModel <MTLJSONSerializing, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long listId;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSDate *createdAt;
@property (readonly, nonatomic) long long revision;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)createdAtJSONTransformer;

- (void).cxx_destruct;

@end
