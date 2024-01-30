@class NSData;

@interface SAUIListItemProtobufMessage : SAAceView

@property (copy, nonatomic) NSData *dynamicURLImageResourceData;
@property (copy, nonatomic) NSData *dynamicURLImageResourceDataEvodBumper;

+ (id)listItemProtobufMessage;
+ (id)listItemProtobufMessageWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
