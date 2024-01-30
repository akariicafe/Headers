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

+ (double)minimumCellHeight;
+ (double)textLabelWidthForText:(id)a0;
+ (id)_textFieldFont;
+ (id)_textLabelFont;

- (BOOL)becomeFirstResponder;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)dealloc;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)_editableTextFieldChanged:(id)a0;
- (void)setContext:(id)a0 andContact:(id)a1;

@end
