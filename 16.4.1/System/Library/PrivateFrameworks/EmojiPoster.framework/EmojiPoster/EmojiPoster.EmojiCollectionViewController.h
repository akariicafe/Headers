@interface EmojiPoster.EmojiCollectionViewController : UICollectionViewController <UITextFieldDelegate> {
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ diffableDataSource;
    void /* unknown type, empty encoding */ isSpinning;
    void /* unknown type, empty encoding */ hiddenEmojiField;
}

- (id)initWithCollectionViewLayout:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)viewDidLoad;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void).cxx_destruct;

@end
