@class NSString;

@interface REMTTHashtag : NSObject

@property (readonly, nonatomic) NSString *objectIdentifier;

+ (id)attributeName;
+ (id)attributeFromHashtag:(id)a0;
+ (BOOL)attributeValue:(id)a0 hasEqualHashtagObjectIdentifierIn:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (id)initWithObjectIdentifier:(id)a0;

@end
