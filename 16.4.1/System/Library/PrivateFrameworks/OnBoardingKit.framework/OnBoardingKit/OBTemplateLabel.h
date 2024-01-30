@class NSString;

@interface OBTemplateLabel : UILabel

@property (copy, nonatomic) NSString *displayText;
@property (copy, nonatomic) NSString *symbolName;

- (void)setText:(id)a0;
- (void)updateTextAlignment;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setTitleTrailingSymbol:(id)a0;

@end
