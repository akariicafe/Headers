@class NSNumber, NSArray;
@protocol SAClientBoundCommand;

@interface SAPhoneVoiceMailSnippet : SAUISnippet

@property (copy, nonatomic) NSNumber *autoPlay;
@property (copy, nonatomic) NSArray *calls;
@property (copy, nonatomic) NSArray *playVoiceMailCommands;
@property (retain, nonatomic) id<SAClientBoundCommand> postPlayCommand;

+ (id)voiceMailSnippet;
+ (id)voiceMailSnippetWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
