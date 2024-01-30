@class NSString, NSArray, NSURL;

@interface SAScreenActionInfo : SADomainObject

@property (copy, nonatomic) NSString *elementId;
@property (copy, nonatomic) NSArray *examples;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *semanticData;
@property (copy, nonatomic) NSURL *semanticId;
@property (copy, nonatomic) NSURL *type;
@property (copy, nonatomic) NSString *value;

+ (id)info;
+ (id)infoWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
