@class NSData, NSString;

@interface SAProtobufMessage : SADomainObject

@property (copy, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *typeName;

+ (id)protobufMessage;
+ (id)protobufMessageWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
