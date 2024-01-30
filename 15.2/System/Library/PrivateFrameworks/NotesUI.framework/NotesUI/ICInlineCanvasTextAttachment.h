@class NSArray;

@interface ICInlineCanvasTextAttachment : ICBaseTextAttachment

@property (readonly, nonatomic) NSArray *inlineViews;
@property (readonly, nonatomic) NSArray *attachmentViews;

- (void)updatePaletteVisibility;
- (void)updatePaletteVisibilityToVisible:(BOOL)a0;
- (void)setViewSelected:(BOOL)a0 inWindow:(id)a1;

@end
