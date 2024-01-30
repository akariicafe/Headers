@class NSArray;

@interface SACFMEmojiParseChunk : SACFMMessageTextParseChunk

@property (nonatomic) long long emojiCount;
@property (copy, nonatomic) NSArray *inflectedEmojiList;

+ (id)emojiParseChunk;
+ (id)emojiParseChunkWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
