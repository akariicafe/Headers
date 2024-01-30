@class NSArray;

@interface TLKRichText : TLKMultilineText

@property (retain, nonatomic) NSArray *formattedTextItems;
@property (readonly) BOOL hasContent;
@property (readonly) BOOL hasOnlyImage;

- (id)icons;
- (id)description;
- (id)filterItemsByType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)text;
- (id)inlineRoundedText;
- (id)stars;

@end
