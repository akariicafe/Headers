@class UIColor, ICInlineAttachment;

@interface ICInlineAttachmentUIModel : NSObject

@property (readonly, weak, nonatomic) ICInlineAttachment *attachment;
@property (readonly, nonatomic) UIColor *labelColor;

+ (id)filteredStyleAttributes:(id)a0;
+ (id)attributesForInlineAttachmentUIModel;

- (void).cxx_destruct;
- (id)initWithAttachment:(id)a0;
- (id)highlightingAttributedString:(id)a0 withSurroundingAttributes:(id)a1;
- (id)attributedStringWithSurroundingAttributes:(id)a0 formatter:(id /* block */)a1;

@end
