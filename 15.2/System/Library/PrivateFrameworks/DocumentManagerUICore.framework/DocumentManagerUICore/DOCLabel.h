@class NSNumber;

@interface DOCLabel : UILabel <DOCLabelSizing> {
    NSNumber *useAttributedTextNumber;
    BOOL _intrinsicContentSizeShortcutDisabled;
}

@property (readonly) struct CGSize { double x0; double x1; } doc_effectiveContentSize;

- (void)setText:(id)a0;
- (void)setAttributedText:(id)a0;
- (void).cxx_destruct;
- (BOOL)_useShortcutIntrinsicContentSize;
- (void)traitCollectionDidChange:(id)a0;

@end
