@class NSArray;

@interface ICInlineCanvasTextAttachment : ICBaseTextAttachment

@property (readonly, nonatomic) NSArray *inlineViews;
@property (readonly, nonatomic) NSArray *attachmentViews;

- (void)setViewSelected:(BOOL)a0 inWindow:(id)a1;
- (void)updatePaletteVisibility;
- (void)updatePaletteVisibilityToVisible:(BOOL)a0;

@end
