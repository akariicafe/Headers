@class NSArray, NSString;

@interface SAUIAcePronunciationItem : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *commands;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *tts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)acePronunciationItemWithDictionary:(id)a0 context:(id)a1;
+ (id)acePronunciationItem;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
