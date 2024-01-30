@class SXFormattedText;

@interface SXDataTableTextSource : SXTextSource

@property (readonly, nonatomic) SXFormattedText *formattedText;
@property (readonly, nonatomic) struct { unsigned long long rowIndex; unsigned long long columnIndex; } indexPath;
@property (nonatomic) unsigned long long defaultTextAlignment;

- (void).cxx_destruct;
- (void)applyStylingOnTextTangierStorage:(id)a0;
- (id)initWithFormattedText:(id)a0 indexPath:(struct { unsigned long long x0; unsigned long long x1; })a1 smartFieldFactory:(id)a2 dataSource:(id)a3 documentLangaugeProvider:(id)a4 fontAttributesConstructor:(id)a5;

@end
