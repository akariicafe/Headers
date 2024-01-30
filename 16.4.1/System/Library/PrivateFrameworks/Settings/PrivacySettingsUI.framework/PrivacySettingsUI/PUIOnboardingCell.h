@class UIStackView, NSString, UIImageView, NSObject;
@protocol PUIOnboardingCellDelegate;

@interface PUIOnboardingCell : PSTableCell <UITextViewDelegate>

@property (weak, nonatomic) NSObject<PUIOnboardingCellDelegate> *delegate;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UIImageView *symbolImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (void)didTapOnboardingCellLink:(id)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 title:(id)a2;
- (void)setDetailText:(id)a0 linkText:(id)a1;
- (void)setSymbolImage:(id)a0 tintColor:(id)a1;

@end
