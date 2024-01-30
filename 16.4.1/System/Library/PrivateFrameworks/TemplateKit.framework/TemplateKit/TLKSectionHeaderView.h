@class TLKLabel, TLKProminenceView, TLKMultilineText;

@interface TLKSectionHeaderView : TLKView

@property (retain, nonatomic) TLKLabel *headerTextLabel;
@property (retain, nonatomic) TLKProminenceView *backgroundView;
@property (retain, nonatomic) TLKMultilineText *headerText;

- (void).cxx_destruct;
- (id)headerLabelText;
- (void)observedPropertiesChanged;
- (id)setupContentView;
- (BOOL)usesDefaultLayoutMargins;

@end
