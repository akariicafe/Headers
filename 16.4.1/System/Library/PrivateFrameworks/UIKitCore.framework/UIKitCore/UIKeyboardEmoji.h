@class NSString;

@interface UIKeyboardEmoji : NSObject

@property (retain, nonatomic) NSString *emojiString;
@property unsigned long long variantMask;

+ (id)emojiWithString:(id)a0 withVariantMask:(unsigned long long)a1;
+ (BOOL)shouldHighlightEmoji:(id)a0;

- (id)key;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithString:(id)a0 withVariantMask:(unsigned long long)a1;

@end
