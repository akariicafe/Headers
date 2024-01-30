@class NSString;

@interface SACFMNumericallyInflectedEmojiName : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *withEmoji;
@property (copy, nonatomic) NSString *withoutEmoji;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)numericallyInflectedEmojiName;
+ (id)numericallyInflectedEmojiNameWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
