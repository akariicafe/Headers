@class NSString, NSDictionary, NSURL, NSNumber;

@interface WFWordPressPost : MTLModel <MTLJSONSerializing, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSNumber *postId;
@property (readonly, copy, nonatomic) NSURL *link;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)linkJSONTransformer;
+ (id)postIdJSONTransformer;

- (void).cxx_destruct;

@end
