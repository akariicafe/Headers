@class NSString, NSDictionary;

@interface WFTrelloObject : MTLModel <NSSecureCoding, MTLJSONSerializing, WFNaming>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *wfName;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
