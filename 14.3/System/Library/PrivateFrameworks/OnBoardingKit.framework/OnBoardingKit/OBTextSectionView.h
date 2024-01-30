@class UILabel;

@interface OBTextSectionView : UIStackView

@property (retain, nonatomic) UILabel *headerLabel;
@property (retain, nonatomic) UILabel *contentLabel;

- (void).cxx_destruct;
- (id)_headerFont;
- (id)initWithHeader:(id)a0 content:(id)a1;
- (void)addAccessoryButton:(id)a0;
- (id)_contentFont;
- (void)traitCollectionDidChange:(id)a0;

@end
