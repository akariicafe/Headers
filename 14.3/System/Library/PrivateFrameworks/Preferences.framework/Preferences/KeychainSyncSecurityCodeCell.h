@class NSString, UILabel;

@interface KeychainSyncSecurityCodeCell : PSEditableTableCell {
    UILabel *_bulletTextLabel;
}

@property (nonatomic) int securityCodeType;
@property (nonatomic) int mode;
@property (retain, nonatomic) NSString *firstPasscodeEntry;

- (void).cxx_destruct;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)setBulletText:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)layoutSubviews;

@end
