@class TLKLabel, TLKProminenceView, TLKMultilineText;

@interface TLKSectionHeaderView : TLKView

@property (retain, nonatomic) TLKLabel *headerTextLabel;
@property (retain, nonatomic) TLKProminenceView *backgroundView;
@property (retain, nonatomic) TLKMultilineText *headerText;

- (id)headerLabelText;
- (void).cxx_destruct;
- (id)setupContentView;
- (void)observedPropertiesChanged;
- (BOOL)usesDefaultLayoutMargins;

@end
