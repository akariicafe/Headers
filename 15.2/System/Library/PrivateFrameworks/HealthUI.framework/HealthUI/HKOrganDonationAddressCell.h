@class NSString, UITextField, UILabel, UIView, UIButton;
@protocol HKSimpleDataEntryCellDelegate;

@interface HKOrganDonationAddressCell : HKSimpleDataEntryCell <UITextFieldDelegate> {
    UILabel *_titleLabel;
    UIView *_addressContainerView;
    UIView *_verticalSeparator;
    UIView *_horizontalSeparator;
    UIView *_stateZipSeparator;
    UIView *_addressSeparator;
    UIView *_citySeparator;
    UIView *_stateSeparator;
    UIButton *_stateShadowButton;
    BOOL _editDisabled;
}

@property (retain, nonatomic) UITextField *streetOneTextField;
@property (retain, nonatomic) UITextField *streetTwoTextField;
@property (retain, nonatomic) UITextField *stateTextField;
@property (retain, nonatomic) UITextField *cityTextField;
@property (retain, nonatomic) UITextField *zipCodeTextField;
@property (weak, nonatomic) id<HKSimpleDataEntryCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)beginEditing;
- (void).cxx_destruct;
- (void)textFieldDidChangeValue:(id)a0;
- (void)_stateShadowButtonTapped:(id)a0;
- (void)_setupFonts;
- (void)_setupLayoutConstraints;
- (BOOL)editDisabled;
- (void)setEditDisabled:(BOOL)a0;

@end
