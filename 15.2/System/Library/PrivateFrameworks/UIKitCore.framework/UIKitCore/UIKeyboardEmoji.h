@class NSString;

@interface UIKeyboardEmoji : NSObject

@property (retain, nonatomic) NSString *emojiString;
@property unsigned long long variantMask;

+ (BOOL)shouldHighlightEmoji:(id)a0;
+ (id)emojiWithString:(id)a0 withVariantMask:(unsigned long long)a1;

- (id)key;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithString:(id)a0 withVariantMask:(unsigned long long)a1;

@end
