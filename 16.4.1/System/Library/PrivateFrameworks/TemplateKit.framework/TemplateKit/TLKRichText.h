@class NSArray;

@interface TLKRichText : TLKMultilineText

@property (retain, nonatomic) NSArray *formattedTextItems;
@property (readonly) BOOL hasContent;
@property (readonly) BOOL hasOnlyImage;

- (id)filterItemsByType:(unsigned long long)a0;
- (id)icons;
- (id)stars;
- (id)text;
- (id)inlineRoundedText;
- (id)description;
- (unsigned long long)maxLines;
- (void).cxx_destruct;

@end
