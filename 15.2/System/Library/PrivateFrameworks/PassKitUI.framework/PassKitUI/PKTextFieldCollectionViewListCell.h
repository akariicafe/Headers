@class NSString;
@protocol PKTextFieldCollectionViewListCellDelegate;

@interface PKTextFieldCollectionViewListCell : UICollectionViewListCell <PKListTextFieldContentViewDelegate>

@property (retain, nonatomic) id<PKTextFieldCollectionViewListCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)endEditing;
- (void)beginEditing;
- (void).cxx_destruct;
- (void)updateConfigurationUsingState:(id)a0;
- (void)prepareForReuse;
- (id)_textFieldContentView;
- (id)textFieldText;
- (void)resetTextFieldTextFromLabel;
- (BOOL)textFieldShouldReturn:(id)a0 forContentView:(id)a1;
- (void)textFieldDidBeginEditing:(id)a0 forContentView:(id)a1;
- (void)textFieldDidEndEditing:(id)a0 forContentView:(id)a1;

@end
