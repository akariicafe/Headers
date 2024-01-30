@class NSString;

@interface OBTemplateLabel : UILabel

@property (copy, nonatomic) NSString *displayText;
@property (copy, nonatomic) NSString *symbolName;

- (id)init;
- (void).cxx_destruct;
- (void)updateTextAlignment;
- (void)setTitleTrailingSymbol:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)setText:(id)a0;

@end
