@class NSArray;

@interface TLKRichText : TLKMultilineText

@property (retain, nonatomic) NSArray *formattedTextItems;
@property (readonly) BOOL hasContent;
@property (readonly) BOOL hasOnlyImage;

- (id)stars;
- (id)inlineRoundedText;
- (void).cxx_destruct;
- (id)text;
- (id)filterItemsByType:(unsigned long long)a0;
- (id)description;
- (id)icons;

@end
