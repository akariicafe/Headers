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

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (BOOL)textFieldShouldReturn:(id)a0;
- (BOOL)becomeFirstResponder;
- (void)dealloc;
- (void)_editableTextFieldChanged:(id)a0;
- (void)setContext:(id)a0 andContact:(id)a1;

@end
