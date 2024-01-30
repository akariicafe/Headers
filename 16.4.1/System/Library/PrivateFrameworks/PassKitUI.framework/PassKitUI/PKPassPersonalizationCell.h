@class NSString, PKContact, PKPassPersonalizationCellContext;
@protocol PKPassPersonalizationCellDelegate;

@interface PKPassPersonalizationCell : UITableViewCell <UITextFieldDelegate>

@property (readonly, nonatomic) PKContact *contact;
@property (readonly, nonatomic) PKPassPersonalizationCellContext *context;
@property (weak, nonatomic) id<PKPassPersonalizationCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_textFieldFont;
+ (id)_textLabelFont;
+ (double)minimumCellHeight;
+ (double)textLabelWidthForText:(id)a0;

- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (BOOL)becomeFirstResponder;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)prepareForReuse;
- (void)dealloc;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_editableTextFieldChanged:(id)a0;
- (void)setContext:(id)a0 andContact:(id)a1;

@end
