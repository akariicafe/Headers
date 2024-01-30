@class NSArray, NSMutableArray;

@interface MPUAbbreviatingLabel : UILabel {
    NSMutableArray *_textRepresentationSizes;
}

@property (copy, nonatomic) NSArray *textRepresentations;

- (void)setFont:(id)a0;
- (void)setNumberOfLines:(long long)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setText:(id)a0;
- (void)setAttributedText:(id)a0;
- (void).cxx_destruct;
- (void)_calculateTextSizes;
- (void)_selectBestRepresentation;
- (void)_setTextRepresentation:(id)a0;

@end
