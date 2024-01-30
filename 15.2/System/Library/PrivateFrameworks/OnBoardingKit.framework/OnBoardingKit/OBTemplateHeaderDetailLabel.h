@interface OBTemplateHeaderDetailLabel : OBTemplateLabel

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } titleRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } bodyRange;

- (void)setDetailedTextHeader:(id)a0 detailedTextBody:(id)a1;
- (void)updateTextAlignment;

@end
