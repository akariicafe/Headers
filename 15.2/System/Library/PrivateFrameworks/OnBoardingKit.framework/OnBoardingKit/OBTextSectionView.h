@class UILabel;

@interface OBTextSectionView : UIStackView

@property (retain, nonatomic) UILabel *headerLabel;
@property (retain, nonatomic) UILabel *contentLabel;

- (id)initWithHeader:(id)a0 content:(id)a1;
- (void).cxx_destruct;
- (id)_headerFont;
- (void)traitCollectionDidChange:(id)a0;
- (void)addAccessoryButton:(id)a0;
- (id)_contentFont;

@end
