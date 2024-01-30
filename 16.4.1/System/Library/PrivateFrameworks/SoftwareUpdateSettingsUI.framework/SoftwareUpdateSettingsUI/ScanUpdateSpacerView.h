@class NSNumber;

@interface ScanUpdateSpacerView : PSFooterHyperlinkView {
    NSNumber *_height;
}

- (id)initWithSpecifier:(id)a0;
- (double)preferredHeightForWidth:(double)a0 inTableView:(id)a1;
- (void)refreshContentsWithSpecifier:(id)a0;
- (void).cxx_destruct;

@end
