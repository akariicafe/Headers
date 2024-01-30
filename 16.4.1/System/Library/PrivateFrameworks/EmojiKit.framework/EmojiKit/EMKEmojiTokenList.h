@class NSArray;

@interface EMKEmojiTokenList : NSObject <NSCopying> {
    NSArray *_emojiTokenArray;
}

@property (readonly) NSArray *emojiTokenArray;
@property (readonly) unsigned long long count;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)description;
- (void).cxx_destruct;
- (id)emojiTokenAtIndex:(unsigned long long)a0;
- (id)initWithEmojiTokenArray:(id)a0;

@end
